#include "../../../_config.hpp"

class Menu {
private:
  int select;
  enum { REGISTER = 1, SEARCH, UPDATE, DELETE, EXIT = 0 };
  bool is_valid = true;

public:
  void text_menu();
  void menu_select();
};