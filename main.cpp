#include "./src/system/GUI/menu.hpp"

int main() {
  ofstream fp("database.dat", ios::app);
  fp.close();

  Menu menu;

  while (true) {
    menu.text_menu();
    menu.menu_select();
  }
}