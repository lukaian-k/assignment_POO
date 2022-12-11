#include "../crud.hpp"

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
            enum {
              NAME = 1,
              KINGDOM,
              PHYLUM,
              CLASS,
              ORDER,
              FAMILY,
              GENUS,
              SPECIES
            };

            while (repeat) {
              system(CLEAR);

              if (is_valid == false) {
                cout << BOLD FONT_RED "Selecione uma opção valida! \n" << endl;
                is_valid = true;
              }

              cout << RESET BACKGROUND_BLUE FONT_WHITE
                  "\n Escolha uma opção para altera-la \n" RESET
                      BACKGROUND_WHITE FONT_BLUE
                  " 1 - Nome >> Animal.              \n"
                  " 2 - Nome >> Reino.               \n"
                  " 3 - Nome >> Filo.                \n"
                  " 4 - Nome >> Classe.              \n"
                  " 5 - Nome >> Ordem.               \n"
                  " 6 - Nome >> Família.             \n"
                  " 7 - Nome >> Género.              \n"
                  " 8 - Nome >> Espécie.             \n"
                  " 0 - Voltar.                      \n" RESET
                   << endl;

              fflush(stdin);

              cout << RESET FONT_BLUE "Selecione uma das opções: " RESET;
              cin >> select;

              if (select != 0) {
                cout << RESET FONT_GREEN "\nPreencha o campo: " RESET;
              }

              switch (select) {

              case NAME: {
                animal.set_name(_search<string>());

                break;
              }

              case KINGDOM: {
                animal.Kingdom::set_name(_search<string>());

                break;
              }

              case PHYLUM: {
                animal.Phylum::set_name(_search<string>());

                break;
              }

              case CLASS: {
                animal.Classe::set_name(_search<string>());

                break;
              }

              case ORDER: {
                animal.Order::set_name(_search<string>());

                break;
              }

              case FAMILY: {
                animal.Family::set_name(_search<string>());

                break;
              }

              case GENUS: {
                animal.Genus::set_name(_search<string>());

                break;
              }

              case SPECIES: {
                animal.Species::set_name(_search<string>());

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

            repeat = true;
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

void CRUD::size() {
} // tentar usar a var global da class para cirar o contador de animal