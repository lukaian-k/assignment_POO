#include "../kingdom.hpp"

Kingdom::Kingdom(string (*replace)(string, char, char), char before,
                 char after) {

  set_name(replace(get_name(), before, after));

  set_description(replace(get_description(), before, after));
}

string Kingdom::get_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Kingdom::get_description() {
  return description == "" ? "Informe esta informação primeiro." : description;
}

bool Kingdom::set_name(string name) { return set_string(this->name, name); }

bool Kingdom::set_description(string description) {
  return set_string(this->description, description);
}

void Kingdom::all_search() {
  cout << RESET BACKGROUND_BLUE FONT_WHITE
      "\n -> Reino " BACKGROUND_WHITE FONT_BLUE "\n Nome da Reino: " FONT_BLACK
       << get_name() << FONT_BLUE "\n Descrição: " FONT_BLACK
       << get_description() << RESET;
}

void Kingdom::conversion_strings(string (*replace)(string, char, char),
                                 char before, char after) {

  set_name(replace(get_name(), before, after));
  set_description(replace(get_description(), before, after));
}

ostream &operator<<(ostream &os, const Kingdom &kingdom) {
  os << "\n" << kingdom.name << "\n";
  os << kingdom.description << "\n";
  return os;
}

istream &operator>>(istream &is, Kingdom &kingdom) {
  is >> kingdom.name >> kingdom.description;
  return is;
}