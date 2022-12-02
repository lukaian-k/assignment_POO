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

void Animal::set_active() {
  is_active == true ? is_active = false : is_active = true;
}

void Animal::all_search() {
  cout << RESET BACKGROUND_WHITE FONT_GREEN "Nome do Animal: " FONT_BLACK
       << name << FONT_GREEN "\nNome Cientifico: " FONT_BLACK << binominalName
       << FONT_GREEN "\nCaracteristicas: " FONT_BLACK
       << descriptive_characteristics << FONT_GREEN "\nEm Extinção? " FONT_BLACK
       << extinction << "\n\n";
}

ostream &operator<<(ostream &os, const Animal &animal) {
  os << "\n" << animal.name << "\n";
  os << animal.binominalName << "\n";
  os << animal.descriptive_characteristics << "\n";
  os << animal.extinction << "\n";
  return os;
}

istream &operator>>(istream &is, Animal &animal) {
  is >> animal.name >> animal.binominalName >>
      animal.descriptive_characteristics >> animal.extinction;
  return is;
}