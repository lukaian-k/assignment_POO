#include "../menu.hpp"
#include "../../../objects/animal/animal.hpp"
#include "../../CRUD/crud.hpp"

void Menu::text_menu() {
  system(CLEAR);

  if (is_valid == false) {
    cout << BOLD FONT_RED "Selecione uma opção valida! \n" << endl;
    is_valid = true;
  }

  cout << RESET BOLD BACKGROUND_BLUE
      "    <<< SISTEMA >>>    \n" RESET BACKGROUND_WHITE FONT_BLUE
      " 1 - Registrar animal. \n"
      " 2 - Buscar animal.    \n"
      " 3 - Atualizar animal. \n"
      " 4 - Remover animal.   \n"
      " 0 - Sair do sistema!  " RESET FONT_BLUE
       << endl;
}

void Menu::menu_select() {
  CRUD crud;

  cout << "\nDigite a funcionalidade desejada: ";
  fflush(stdin);
  cin >> select;

  switch (select) {

  case REGISTER: {
    ofstream fp("database.txt", fstream::app);
    crud.add(fp);
    fp.close();
    break;
  }

  case SEARCH: {
    ifstream fp("database.txt");
    crud.search(fp);
    fp.close();
    break;
  }

  case UPDATE: {
    // crud.update();
    break;
  }

  case DELETE: {
    // crud.remove();
    break;
  }

  case EXIT: {
    system(CLEAR);
    cout << BOLD BACKGROUND_WHITE FONT_GREEN " Programa finalizado! \n" RESET
         << endl;
    exit(1);
  }

  default:
    is_valid = false;
  }
}