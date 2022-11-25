#include "./src/objects/animal/animal.hpp"
#include "./src/system/GUI/menu.hpp"

int main() {
  ofstream fp("./database/animais.dat", ios::app);
  fp.close();

  Menu menu;

  while (true) {
    menu.text_menu();
    menu.menu_select();
  }
}