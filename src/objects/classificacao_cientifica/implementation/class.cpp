#include "../class.hpp"

string Classe::get_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Classe::get_description() {
  return description == "" ? "Informe esta informação primeiro." : description;
}

bool Classe::set_name(string name) { return set_string(this->name, name); }

bool Classe::set_description(string description) {
  return set_string(this->description, description);
}
