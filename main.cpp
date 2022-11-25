#include "./src/objects/animal/animal.hpp"
#include "./src/system/GUI/menu.hpp"

int main() {
  Menu menu;

  while (true) {
    menu.text_menu();
    menu.menu_select();
  }

  return 0;
}