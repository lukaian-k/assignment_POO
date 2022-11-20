#include "../kingdom.h"

string Kingdom::get_kingdom_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Kingdom::get_kingdom_description() {
  return description == "" ? "Informe esta informação primeiro." : description;
}

bool Kingdom::set_string(string &before, string after) {
  if (typeid(after) == typeid(string) && after != "") {
    before = after;
    return true;
  }
  return false;
}

bool Kingdom::set_kingdom_name(string name) {
  return set_string(this->name, name);
}

bool Kingdom::set_kingdom_description(string description) {
  return set_string(this->description, description);
}