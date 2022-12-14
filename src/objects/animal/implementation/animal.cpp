#include "../animal.hpp"
#include <bits/stdc++.h>

Animal::Animal(string (*replace)(string, char, char))
    : Species(replace, ' ', '-') {

  system(CLEAR);
  cout << RESET BOLD BACKGROUND_BLUE FONT_WHITE " INFO >> ANIMAL "
       << RESET "\n\n";

  char before = ' ';
  char after = '-';

  set_name(builder_string(replace, "Insira o nome: "));

  set_binominal_name(builder_string(replace, "Insira o nome científico: "));

  set_descriptive_characteristics(
      builder_string(replace, "Insira a descrição do Animal: "));

  set_extinction(builder_string(replace, "Está extinto: "));

  biologist = Biologist(replace);
  localization = Localization(replace);
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

bool Animal::get_active() { return is_active ? true : false; }

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

void Animal::set_active() { is_active ? is_active = false : is_active = true; }

void Animal::all_search(int number) {
  if (get_active()) {
    cout << RESET "\n" BACKGROUND_RED FONT_WHITE " ANIMAL - N°" << number
         << " " BACKGROUND_WHITE FONT_BLUE "\n Nome do Animal: " FONT_BLACK
         << get_name() + " " << FONT_BLUE "\n Nome Cientifico: " FONT_BLACK
         << get_binominal_name() + " "
         << FONT_BLUE "\n Caracteristicas: " FONT_BLACK
         << get_descriptive_characteristics() + " "
         << FONT_BLUE "\n Em Extinção? " FONT_BLACK << get_extinction() + " "
         << RESET;

    Kingdom::all_search();
    Phylum::all_search();
    Classe::all_search();
    Order::all_search();
    Family::all_search();
    Genus::all_search();
    Species::all_search();

    biologist.all_search();
    localization.all_search();

    cout << endl;
  }
}

void Animal::minimum_search(int number) {
  if (get_active()) {
    cout << RESET "\n" BACKGROUND_RED FONT_WHITE " ANIMAL - N°" << number
         << " " BACKGROUND_WHITE FONT_BLUE "\n Nome do Animal: " FONT_BLACK
         << get_name() + " " << FONT_BLUE "\n Nome Científico: " FONT_BLACK
         << get_binominal_name() + " "
         << FONT_BLUE "\n  Em Extinção? " FONT_BLACK << get_extinction() + " "
         << RESET;

    cout << endl;
  }
}

bool Animal::specify_search(string name, int number) {
  if (!get_active())
    return false;

  transform(name.begin(), name.end(), name.begin(), ::tolower);

  string get = get_name();
  transform(get.begin(), get.end(), get.begin(), ::tolower);

  if (name == get) {
    all_search(number);
    return true;
  }

  return false;
}

void Animal::conversion_strings(string (*replace)(string, char, char),
                                char before, char after) {
  if (get_active()) {

    set_name(replace(get_name(), before, after));

    set_binominal_name(replace(get_binominal_name(), before, after));

    set_descriptive_characteristics(
        replace(get_descriptive_characteristics(), before, after));

    set_extinction(replace(get_extinction(), before, after));

    Species::conversion_strings(replace, before, after);
    Genus::conversion_strings(replace, before, after);
    Family::conversion_strings(replace, before, after);
    Order::conversion_strings(replace, before, after);
    Classe::conversion_strings(replace, before, after);
    Phylum::conversion_strings(replace, before, after);
    Kingdom::conversion_strings(replace, before, after);

    biologist.conversion_strings(replace, before, after);
    localization.conversion_strings(replace, before, after);
  }
}

ostream &operator<<(ostream &os, const Animal &animal) {
  os << "\n" << animal.is_active << " ";
  os << animal.name << " ";
  os << animal.binominal_name << " ";
  os << animal.descriptive_characteristics << " ";
  os << animal.extinction << " ";

  os << static_cast<const Species &>(animal);
  os << static_cast<const Genus &>(animal);
  os << static_cast<const Family &>(animal);
  os << static_cast<const Order &>(animal);
  os << static_cast<const Classe &>(animal);
  os << static_cast<const Phylum &>(animal);
  os << static_cast<const Kingdom &>(animal);

  os << animal.biologist;
  os << animal.localization;

  return os;
}

istream &operator>>(istream &is, Animal &animal) {
  is >> animal.is_active >> animal.name >> animal.binominal_name >>
      animal.descriptive_characteristics >> animal.extinction;

  is >> static_cast<Species &>(animal);
  is >> static_cast<Genus &>(animal);
  is >> static_cast<Family &>(animal);
  is >> static_cast<Order &>(animal);
  is >> static_cast<Classe &>(animal);
  is >> static_cast<Phylum &>(animal);
  is >> static_cast<Kingdom &>(animal);

  is >> animal.biologist;
  is >> animal.localization;

  return is;
}