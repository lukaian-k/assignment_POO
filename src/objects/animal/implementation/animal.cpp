#include "../animal.hpp"

Animal::Animal(string (*replace)(string, char, char)) {
  cout << "nome: ";
  string name;
  fflush(stdin);
  getline(std::cin >> std::ws, name);
  name = replace(name, ' ', '-');
  cout << name;

  // animal
  set_animal_name(replace(name, ' ', '-'));

  set_animal_binominal_name(replace(get_animal_binominal_name(), ' ', '-'));

  set_animal_descriptive_characteristics(
      replace(get_animal_descriptive_characteristics(), ' ', '-'));

  set_animal_extinction(replace(get_animal_extinction(), ' ', '-'));

  // species
  set_species_name(replace(get_species_name(), ' ', '-'));

  set_species_abbreviations(replace(get_species_abbreviations(), ' ', '-'));

  set_species_category(replace(get_species_category(), ' ', '-'));
}

string Animal::get_animal_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Animal::get_animal_binominal_name() {
  return binominal_name == "" ? "Informe esta informação primeiro."
                              : binominal_name;
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

bool Animal::set_animal_binominal_name(string binominal_name) {
  return set_string(this->binominal_name, binominal_name);
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
  cout << RESET "\n" BACKGROUND_RED FONT_WHITE
                " ANIMAL - N°x " BACKGROUND_WHITE FONT_BLUE
                "\n Nome do Animal: " FONT_BLACK
       << get_animal_name() << FONT_BLUE "\n Nome Cientifico: " FONT_BLACK
       << get_animal_binominal_name()
       << FONT_BLUE "\n Caracteristicas: " FONT_BLACK
       << get_animal_descriptive_characteristics()
       << FONT_BLUE "\n Em Extinção? " FONT_BLACK << get_animal_extinction()
       << RESET;
  species_all_search();
  cout << endl;
}

ostream &operator<<(ostream &os, const Animal &animal) {
  os << "\n" << animal.name << "\n";
  os << animal.binominal_name << "\n";
  os << animal.descriptive_characteristics << "\n";
  os << animal.extinction;

  os << static_cast<const Species &>(animal);
  return os;
}

istream &operator>>(istream &is, Animal &animal) {
  is >> animal.name >> animal.binominal_name >>
      animal.descriptive_characteristics >> animal.extinction;

  is >> static_cast<Species &>(animal);
  return is;
}