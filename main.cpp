#include "./src/system/GUI/menu.hpp"

int main(int argc, char *argv[]) {
  ofstream fp("database.txt", ios::app);
  fp.close();
  Menu menu;

  while (true) {
    menu.text_menu();
    menu.menu_select();
  }
}