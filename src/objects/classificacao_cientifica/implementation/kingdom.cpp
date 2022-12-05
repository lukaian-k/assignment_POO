#include "../kingdom.hpp"

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