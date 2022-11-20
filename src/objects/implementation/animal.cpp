#include "../animal.h"

string Animal::get_animal_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Animal::get_animal_binominalName() {
  return binominalName == "" ? "Informe esta informação primeiro." : binominalName;
}

string Animal::get_animal_descriptiveCharacteristics() {
  return descriptiveCharacteristics == "" ? "Informe esta informação primeiro." : descriptiveCharacteristics;
}

string Animal::get_animal_extinction() {
  return extinction == "" ? "Informe esta informação primeiro." : extinction;
}


bool Animal::set_animal_name(string name) {
  return set_string(this->name, name);
}

bool Animal::set_animal_binominalName(string binominalName) {
  return set_string(this->binominalName, binominalName);
}

bool Animal::set_animal_descriptiveCharacteristics(string descriptiveCharacteristics) {
  return set_string(this->descriptiveCharacteristics, descriptiveCharacteristics);
}

bool Animal::set_animal_extinction(string extinction) {
  return set_string(this->extinction, extinction);
}