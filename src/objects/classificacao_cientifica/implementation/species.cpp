#include "../species.hpp"

Species::Species(string (*replace)(string, char, char)) {
  char before = ' ';
  char after = '-';

  set_species_name(replace(get_species_name(), before, after));

  set_species_abbreviations(
      replace(get_species_abbreviations(), before, after));

  set_species_category(replace(get_species_category(), before, after));
}

string Species::get_species_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Species::get_species_abbreviations() {
  return abbreviations == "" ? "Informe esta informação primeiro."
                             : abbreviations;
}

string Species::get_species_category() {
  return species_category == "" ? "Informe esta informação primeiro."
                                : species_category;
}

bool Species::set_species_name(string name) {
  return set_string(this->name, name);
}

bool Species::set_species_abbreviations(string abbreviations) {
  return set_string(this->abbreviations, abbreviations);
}

bool Species::set_species_category(string species_category) {
  return set_string(this->species_category, species_category);
}

void Species::species_all_search() {
  cout << RESET BACKGROUND_BLUE FONT_WHITE
      "\n -> Espécies " BACKGROUND_WHITE FONT_BLUE
      "\n Nome da Espécie: " FONT_BLACK
       << get_species_name() << FONT_BLUE "\n Abreviaturas: " FONT_BLACK
       << get_species_abbreviations()
       << FONT_BLUE "\n Categoria da Espécie: " FONT_BLACK
       << get_species_category() << RESET;
}

void Species::conversion_strings(string (*replace)(string, char, char),
                                 char before, char after) {

  set_species_name(replace(get_species_name(), before, after));
  set_species_abbreviations(
      replace(get_species_abbreviations(), before, after));
  set_species_category(replace(get_species_category(), before, after));
}

ostream &operator<<(ostream &os, const Species &species) {
  os << "\n" << species.name << "\n";
  os << species.abbreviations << "\n";
  os << species.species_category << "\n";
  return os;
}

istream &operator>>(istream &is, Species &species) {
  is >> species.name >> species.abbreviations >> species.species_category;
  return is;
}