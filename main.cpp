#include "./src/system/GUI/menu.hpp"

int main(int argc, char *argv[]) {
  ofstream fp("database.txt", ios::app);
  fp.close();

  Menu menu;

  while (true) {

    try {

      menu.text_menu();
      menu.menu_select();

    } catch (exception &e) {

      cout << RESET BACKGROUND_RED FONT_WHITE "\nAlgo ocorreu! Error: "
           << e.what() << " " RESET << endl;
    }
  }
}