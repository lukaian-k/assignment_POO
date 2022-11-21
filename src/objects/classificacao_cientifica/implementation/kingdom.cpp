#include "../kingdom.h"

bool Kingdom::set_string(string &before, string after) {
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

string Kingdom::get_kingdom_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Kingdom::get_kingdom_description() {
  return description == "" ? "Informe esta informação primeiro." : description;
}

bool Kingdom::set_kingdom_name(string name) {
  return set_string(this->name, name);
}

bool Kingdom::set_kingdom_description(string description) {
  return set_string(this->description, description);
}