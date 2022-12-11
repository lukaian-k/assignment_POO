#include "../family.hpp"

Family::Family(string (*replace)(string, char, char), char before, char after)
    : Order(replace, ' ', '-') {

  system(CLEAR);
  cout << RESET BOLD BACKGROUND_BLUE FONT_WHITE " INFO >> FAMÍLIA "
       << RESET "\n\n";

  set_name(builder_string(replace, "Insira o nome da família: "));

  set_description(builder_string(replace, "Insira a descrição da família: "));
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
       << get_name() + " " << FONT_BLUE "\n Descrição: " FONT_BLACK
       << get_description() + " " << RESET;
}

void Family::conversion_strings(string (*replace)(string, char, char),
                                char before, char after) {

  set_name(replace(get_name(), before, after));
  set_description(replace(get_description(), before, after));
}

ostream &operator<<(ostream &os, const Family &family) {
  os << family.name << " ";
  os << family.description << " ";
  return os;
}

istream &operator>>(istream &is, Family &family) {
  is >> family.name >> family.description;
  return is;
}