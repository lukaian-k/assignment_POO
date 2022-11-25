#include "../../../_config.hpp"

class Menu {
private:
  int select;
  enum { REGISTER = 1, SEARCH, DELETE, PRINT, EXIT };

public:
  void text_menu();
  bool menu_select();
};