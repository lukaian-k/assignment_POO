#include "../menu.hpp"

void Menu::text_menu() {
  system("clear");
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

bool Menu::menu_select() {
  cout << "Digite a funcionalidade desejada: " << endl;
  cin >> select;

  switch (select) {

  case REGISTER:
    return false;

  case SEARCH:
    return false;

  case DELETE:
    return false;

  case PRINT:
    return false;

  case EXIT:
    system("clear");
    cout << BOLD BACKGROUND_WHITE FONT_GREEN " Programa finalizado! \n" RESET
         << endl;
    exit(1);

  default:
    cout << BOLD FONT_RED "\n\nSelecione uma opção valida!" RESET << endl;
    return false;
  }
}