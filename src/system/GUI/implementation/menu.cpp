#include "../menu.hpp"

void Menu::text_menu() {
  system(CLEAR);

  if (is_valid == false) {
    cout << BOLD FONT_RED "\n\nSelecione uma opção valida!" RESET << endl;
    is_valid = true;
  }

  cout << RESET BOLD BACKGROUND_BLUE
      "\n<<< SISTEMA >>>\n-------------------------------------"
       << endl;
  cout << RESET BACKGROUND_WHITE FONT_BLUE
      " 1 - REGISTER.\n"
      " 2 - SEARCH.\n"
      " 3 - DELETE.\n"
      " 4 - PRINT.\n"
      " 0 - Sair do sistema!\n" RESET FONT_BLUE
       << endl;
}

void Menu::menu_select() {
  cout << "Digite a funcionalidade desejada: " << endl;
  cin >> select;

  switch (select) {

  case REGISTER:

  case SEARCH:

  case DELETE:

  case PRINT:

  case EXIT:
    system(CLEAR);
    cout << BOLD BACKGROUND_WHITE FONT_GREEN " Programa finalizado! \n" RESET
         << endl;
    exit(1);

  default:
    is_valid = false;
  }
}