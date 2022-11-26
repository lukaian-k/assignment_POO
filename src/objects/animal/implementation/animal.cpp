#include "../animal.hpp"

string Animal::get_animal_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Animal::get_animal_binominalName() {
  return binominalName == "" ? "Informe esta informação primeiro."
                             : binominalName;
}

string Animal::get_animal_descriptive_characteristics() {
  return descriptive_characteristics == "" ? "Informe esta informação primeiro."
                                           : descriptive_characteristics;
}

string Animal::get_animal_extinction() {
  return extinction == "" ? "Informe esta informação primeiro." : extinction;
}

bool Animal::get_active() { return is_active == true ? true : false; }

bool Animal::set_animal_name(string name) {
  return set_string(this->name, name);
}

bool Animal::set_animal_binominalName(string binominalName) {
  return set_string(this->binominalName, binominalName);
}

bool Animal::set_animal_descriptive_characteristics(
    string descriptive_characteristics) {
  return set_string(this->descriptive_characteristics,
                    descriptive_characteristics);
}

bool Animal::set_animal_extinction(string extinction) {
  return set_string(this->extinction, extinction);
}

void Animal::set_active() { is_active == true ? is_active = false : is_active = true; }