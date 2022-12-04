#include "../crud.hpp"

string replace(string word, char before, char after) {
  for (int i = 0; i <= word.length(); i++) {
    if (word[i] == before) {
      word[i] = after;
    }
  }
  return word;
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
      cout << RESET BACKGROUND_GREEN FONT_WHITE " TODOS >> ANIMAIS \n" << endl;

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
        char back;
        cout << RESET "\n\n" BACKGROUND_GREEN FONT_WHITE
                      " Pressione qualquer tecla para continuar... " RESET;
        cin >> back;
      }
      return;
    }

    case MINIMUM: {
      system(CLEAR);
      break;
    }

    case SPECIFY: {
      system(CLEAR);
      break;
    }

    case BACK: {
      return;
    }

    default:
      is_valid = false;
    }
  }
}

void CRUD::update() {}

void CRUD::remove() {}

void CRUD::size() {}