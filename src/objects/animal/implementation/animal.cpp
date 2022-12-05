#include "../animal.hpp"

Animal::Animal(string (*replace)(string, char, char))
    : Species(replace, ' ', '-') {

  char before = ' ';
  char after = '-';

  cout << "nome: ";
  fflush(stdin);

  string name;
  getline(std::cin >> std::ws, name);
  name = replace(name, before, after);

  // animal
  set_name(replace(name, before, after));

  set_binominal_name(replace(get_binominal_name(), before, after));

  set_descriptive_characteristics(
      replace(get_descriptive_characteristics(), before, after));

  set_extinction(replace(get_extinction(), before, after));
}

string Animal::get_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Animal::get_binominal_name() {
  return binominal_name == "" ? "Informe esta informação primeiro."
                              : binominal_name;
}

string Animal::get_descriptive_characteristics() {
  return descriptive_characteristics == "" ? "Informe esta informação primeiro."
                                           : descriptive_characteristics;
}

string Animal::get_extinction() {
  return extinction == "" ? "Informe esta informação primeiro." : extinction;
}

bool Animal::get_active() { return is_active == true ? true : false; }

bool Animal::set_name(string name) { return set_string(this->name, name); }

bool Animal::set_binominal_name(string binominal_name) {
  return set_string(this->binominal_name, binominal_name);
}

bool Animal::set_descriptive_characteristics(
    string descriptive_characteristics) {
  return set_string(this->descriptive_characteristics,
                    descriptive_characteristics);
}

bool Animal::set_extinction(string extinction) {
  return set_string(this->extinction, extinction);
}

void Animal::set_active() {
  is_active == true ? is_active = false : is_active = true;
}

void Animal::all_search() {
  cout << RESET "\n" BACKGROUND_RED FONT_WHITE
                " ANIMAL - N°x " BACKGROUND_WHITE FONT_BLUE
                "\n Nome do Animal: " FONT_BLACK
       << get_name() << FONT_BLUE "\n Nome Cientifico: " FONT_BLACK
       << get_binominal_name() << FONT_BLUE "\n Caracteristicas: " FONT_BLACK
       << get_descriptive_characteristics()
       << FONT_BLUE "\n Em Extinção? " FONT_BLACK << get_extinction() << RESET;

  Order::all_search();
  Family::all_search();
  Genus::all_search();
  Species::all_search();

  cout << endl;
}

void Animal::conversion_strings(string (*replace)(string, char, char),
                                char before, char after) {

  set_name(replace(get_name(), before, after));

  set_binominal_name(replace(get_binominal_name(), before, after));

  set_descriptive_characteristics(
      replace(get_descriptive_characteristics(), before, after));

  set_extinction(replace(get_extinction(), before, after));

  Species::conversion_strings(replace, before, after);
  Genus::conversion_strings(replace, before, after);
  Family::conversion_strings(replace, before, after);
  Order::conversion_strings(replace, before, after);
}

ostream &operator<<(ostream &os, const Animal &animal) {
  os << "\n" << animal.name << "\n";
  os << animal.binominal_name << "\n";
  os << animal.descriptive_characteristics << "\n";
  os << animal.extinction;

  os << static_cast<const Species &>(animal);
  os << static_cast<const Genus &>(animal);
  os << static_cast<const Family &>(animal);
  os << static_cast<const Order &>(animal);
  return os;
}

istream &operator>>(istream &is, Animal &animal) {
  is >> animal.name >> animal.binominal_name >>
      animal.descriptive_characteristics >> animal.extinction;

  is >> static_cast<Species &>(animal);
  is >> static_cast<Genus &>(animal);
  is >> static_cast<Family &>(animal);
  is >> static_cast<Order &>(animal);
  return is;
}