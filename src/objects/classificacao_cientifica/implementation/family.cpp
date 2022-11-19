#include "../family.h"

string Family::get_family_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Family::get_family_description() {
  return description == "" ? "Informe esta informação primeiro." : description;
}

bool Family::set_family_name(string name) {
  return set_string(this->name, name);
}

bool Family::set_family_description(string description) {
  return set_string(this->description, description);
}