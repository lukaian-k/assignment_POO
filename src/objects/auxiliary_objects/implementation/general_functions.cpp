#include "../general_functions.hpp"

bool General_functions::set_string(string &before, string after) {
  try {
    if (after != "" && typeid(before) == typeid(string) &&
        typeid(after) == typeid(string)) {
      before = after;
      return true;
    }
    throw false;
  } catch (bool answer) {
    return answer;
  }
}

string General_functions::builder_string(string (*replace)(string, char, char),
                                         string text) {

  char before = ' ';
  char after = '-';

  cout << RESET BOLD FONT_WHITE << text << RESET;
  fflush(stdin);

  string add;
  getline(std::cin >> std::ws, add);
  return replace(add, before, after);
}