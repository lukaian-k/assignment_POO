#include "../order.hpp"

Order::Order(string (*replace)(string, char, char), char before, char after)
    : Classe(replace, ' ', '-') {

  set_name(replace(get_name(), before, after));

  set_description(replace(get_description(), before, after));
}

string Order::get_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Order::get_description() {
  return description == "" ? "Informe esta informação primeiro." : description;
}

bool Order::set_name(string name) { return set_string(this->name, name); }

bool Order::set_description(string description) {
  return set_string(this->description, description);
}

void Order::all_search() {
  cout << RESET BACKGROUND_BLUE FONT_WHITE
      "\n -> Ordem " BACKGROUND_WHITE FONT_BLUE "\n Nome da Ordem: " FONT_BLACK
       << get_name() << FONT_BLUE "\n Descrição: " FONT_BLACK
       << get_description() << RESET;
}

void Order::conversion_strings(string (*replace)(string, char, char),
                               char before, char after) {

  set_name(replace(get_name(), before, after));
  set_description(replace(get_description(), before, after));
}

ostream &operator<<(ostream &os, const Order &order) {
  os << "\n" << order.name << "\n";
  os << order.description;
  return os;
}

istream &operator>>(istream &is, Order &order) {
  is >> order.name >> order.description;
  return is;
}