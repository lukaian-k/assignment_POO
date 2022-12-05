#include "../family.hpp"

Family::Family(string (*replace)(string, char, char), char before, char after)
    : Order(replace, ' ', '-') {

  set_name(replace(get_name(), before, after));

  set_description(replace(get_description(), before, after));
}

string Family::get_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Family::get_description() {
  return description == "" ? "Informe esta informação primeiro." : description;
}

bool Family::set_name(string name) { return set_string(this->name, name); }

bool Family::set_description(string description) {
  return set_string(this->description, description);
}

void Family::all_search() {
  cout << RESET BACKGROUND_BLUE FONT_WHITE
      "\n -> Família " BACKGROUND_WHITE FONT_BLUE
      "\n Nome da Família: " FONT_BLACK
       << get_name() << FONT_BLUE "\n Descrição: " FONT_BLACK
       << get_description() << RESET;
}

void Family::conversion_strings(string (*replace)(string, char, char),
                                char before, char after) {

  set_name(replace(get_name(), before, after));
  set_description(replace(get_description(), before, after));
}

ostream &operator<<(ostream &os, const Family &family) {
  os << "\n" << family.name << "\n";
  os << family.description;
  return os;
}

istream &operator>>(istream &is, Family &family) {
  is >> family.name >> family.description;
  return is;
}