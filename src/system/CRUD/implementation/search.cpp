#include "../crud.hpp"

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
          animal.all_search(size(animal.get_name()));
        }

        cout << RESET "\n\n" BOLD BACKGROUND_WHITE FONT_BLUE
                      " Total de Animais cadastrados: "
             << size() << " " RESET << endl;

        _proceed();
      }
      return;
    }

    case MINIMUM: {
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
          animal.minimum_search(size(animal.get_name()));
        }

        cout << RESET "\n\n" BOLD BACKGROUND_WHITE FONT_BLUE
                      " Total de Animais cadastrados: "
             << size() << " " RESET << endl;

        _proceed();
      }
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

          if (animal.specify_search(name, size(animal.get_name())))
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