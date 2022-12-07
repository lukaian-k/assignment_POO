#include "../crud.hpp"

string replace(string word, char before, char after) {

  for (int i = 0; i <= word.length(); i++) {
    if (word[i] == before) {
      word[i] = after;
    }
  }

  return word;
}

template <typename SEARCH> SEARCH CRUD::_search() {
  SEARCH search;

  while (typeid(search) == typeid(string) && search == "") {
    fflush(stdin);
    getline(std::cin >> std::ws, search);

    if (search == "" || search == " ") {
      cout << RESET "\n" BACKGROUND_WHITE FONT_RED " Preencha o campo. " RESET
           << endl;
    }
  }

  return search;
}

void CRUD::_proceed() {

  cout << RESET "\n\n" BACKGROUND_GREEN FONT_WHITE
                " Pressione a tecla ENTER para continuar... " RESET;

  cin.ignore();
  cin.get();
}

void CRUD::add(ostream &fp) {

  if (!fp.good()) {
    cout << RESET BACKGROUND_RED FONT_WHITE
        "Erro ao abrir o arquivo: database.txt" RESET
         << endl;

  } else {
    Animal animal(&replace);
    cout << endl;

    fp << animal; // by inserting in the file
  }
}

void CRUD::search(istream &fp) {

  Animal animal;

  while (true) {
    system(CLEAR);

    if (is_valid == false) {
      cout << BOLD FONT_RED "Selecione uma opção valida! \n" << endl;
      is_valid = true;
    }

    cout << RESET BOLD BACKGROUND_BLUE
        "      --- SEARCH ---     \n" RESET BACKGROUND_WHITE FONT_BLUE
        " 1 - Exibição Detalhada. \n"
        " 2 - Exibição Simples.   \n"
        " 3 - Busca Especifica.   \n"
        " 0 - Voltar.             " RESET FONT_BLUE
         << endl;

    cout << "\nDigite a funcionalidade desejada: ";
    fflush(stdin);
    cin >> select;

    switch (select) {

    case ALL: {
      system(CLEAR);
      cout << RESET BOLD BACKGROUND_GREEN FONT_WHITE " TODOS >> ANIMAIS \n"
           << endl;

      if (!fp.good()) {
        cout << RESET BACKGROUND_RED FONT_WHITE
            "Erro ao abrir o arquivo: database.txt" RESET
             << endl;
      } else {
        while (!fp.eof()) {

          fp >> animal; // extracts from the file
          animal.conversion_strings(&replace, '-', ' ');
          animal.all_search();
        }

        _proceed();
      }
      return;
    }

    case MINIMUM: {
      system(CLEAR);
      _proceed();
      return;
    }

    case SPECIFY: {
      system(CLEAR);
      cout << RESET BOLD BACKGROUND_GREEN FONT_WHITE
          " BUSCA ESPECÍFICA >> ANIMAIS \n"
           << endl;

      if (!fp.good()) {
        cout << RESET BACKGROUND_RED FONT_WHITE
            "Erro ao abrir o arquivo: database.txt" RESET
             << endl;
      } else {
        cout << RESET BOLD FONT_BLUE << "Qual animal deseja buscar? " << RESET;

        string name = _search<string>();

        while (!fp.eof()) {

          fp >> animal; // extracts from the file
          animal.conversion_strings(&replace, '-', ' ');

          if (animal.specify_search(name))
            break;

          if (fp.eof()) {
            cout << RESET "\n" BACKGROUND_WHITE FONT_GREEN " Nenhum animal: ("
                 << name << ") foi encontrado! " RESET << endl;
          }
        }

        _proceed();
      }

      return;
    }

    case BACK: {
      return;
    }

    default:
      is_valid = false;
    }
  }
}

void CRUD::update(fstream &fp) {
  system(CLEAR);
  cout << RESET BOLD BACKGROUND_BLUE FONT_WHITE " ATUALIZAR >> ANIMAL \n"
       << endl;

  if (!fp.good()) {
    cout << RESET BACKGROUND_RED FONT_WHITE
        "Erro ao abrir o arquivo: database.txt" RESET
         << endl;
  } else {
    cout << RESET BOLD FONT_BLUE << "Qual animal deseja buscar? " << RESET;

    string name = _search<string>();
    Animal animal;

    while (!fp.eof()) {

      auto pos = fp.tellg();
      fp >> animal; // extracts from the file

      if (animal.specify_search(name)) {

        enum { FULL = 1, SPECIFY, DONE = 0 };
        bool repeat = true;

        while (repeat) {
          system(CLEAR);

          if (is_valid == false) {
            cout << BOLD FONT_RED "Selecione uma opção valida! \n" << endl;
            is_valid = true;
          }

          cout << RESET BOLD BACKGROUND_BLUE
              "        OPÇÕES >> UPDATE        \n" RESET BACKGROUND_WHITE
                  FONT_BLUE " 1 - Reescrever completamente.  \n"
              " 2 - Apenas o desejado.         \n"
              " 0 - Continuar...               \n" RESET
               << endl;

          fflush(stdin);

          cout << RESET FONT_BLUE "Selecione uma das opções: " RESET;
          cin >> select;

          switch (select) {

          case FULL: {
            animal = Animal(&replace);

            cout << endl;
            break;
          }

          case SPECIFY: {
            break;
          }

          case DONE: {
            repeat = !repeat;
            break;
          }

          default:
            is_valid = false;
          }
        }

        cout << RESET BOLD FONT_RED "\nDeseja atualizar? " FONT_GREEN
                                    "(1: SIM | 0: NÃO) " RESET;

        fflush(stdin);

        int answer;
        cin >> answer;

        if (answer != 1) {
          cout << RESET BACKGROUND_RED FONT_WHITE
              "\n\n OPERAÇÃO CANCELADA! \n" RESET
               << endl;

          break;
        }

        fp.seekp(pos);
        fp << animal;

        cout << RESET BACKGROUND_GREEN FONT_WHITE
            "\n\n A OPERAÇÃO FOI CONCLUIDA COM ÊXITO! \n" RESET
             << endl;

        break;
      }

      if (fp.eof()) {
        cout << RESET "\n" BACKGROUND_WHITE FONT_GREEN " Nenhum animal: ("
             << name << ") foi encontrado! " RESET << endl;
      }
    }

    _proceed();
  }
}

void CRUD::remove(fstream &fp) {
  system(CLEAR);
  cout << RESET BOLD BACKGROUND_RED FONT_WHITE " DELETAR >> ANIMAL \n" << endl;

  if (!fp.good()) {
    cout << RESET BACKGROUND_RED FONT_WHITE
        "Erro ao abrir o arquivo: database.txt" RESET
         << endl;
  } else {
    cout << RESET BOLD FONT_BLUE << "Qual animal deseja buscar? " << RESET;

    string name = _search<string>();
    Animal animal;

    while (!fp.eof()) {

      auto pos = fp.tellg();
      fp >> animal; // extracts from the file

      if (animal.specify_search(name)) {

        cout << RESET BOLD FONT_RED "\nDeseja deletar? " FONT_GREEN
                                    "(1: SIM | 0: NÃO) " RESET;

        animal.set_active();
        fflush(stdin);

        int answer;
        cin >> answer;

        if (answer != 1) {
          cout << RESET BACKGROUND_RED FONT_WHITE
              "\n\n OPERAÇÃO CANCELADA! \n" RESET
               << endl;

          break;
        }

        fp.seekp(pos);
        fp << animal;

        cout << RESET BACKGROUND_GREEN FONT_WHITE
            "\n\n A OPERAÇÃO FOI CONCLUIDA COM ÊXITO! \n" RESET
             << endl;

        break;
      }

      if (fp.eof()) {
        cout << RESET "\n" BACKGROUND_WHITE FONT_GREEN " Nenhum animal: ("
             << name << ") foi encontrado! " RESET << endl;
      }
    }

    _proceed();
  }
}

void CRUD::size() {
} // tentar usar a var global da class para cirar o contador de animal