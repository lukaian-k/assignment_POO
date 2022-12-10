#include "../species.hpp"

Species::Species(string (*replace)(string, char, char), char before, char after)
    : Genus(replace, ' ', '-') {

  system(CLEAR);
  cout << RESET BOLD BACKGROUND_BLUE FONT_WHITE " INFO >> ESPÉCIES "
       << RESET "\n\n";

  set_name(builder_string(replace, "Insira o nome: "));

  set_abbreviations(builder_string(replace, "Abreviação: "));

  set_category(builder_string(replace, "Categoria: "));
}

string Species::get_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Species::get_abbreviations() {
  return abbreviations == "" ? "Informe esta informação primeiro."
                             : abbreviations;
}

string Species::get_category() {
  return species_category == "" ? "Informe esta informação primeiro."
                                : species_category;
}

bool Species::set_name(string name) { return set_string(this->name, name); }

bool Species::set_abbreviations(string abbreviations) {
  return set_string(this->abbreviations, abbreviations);
}

bool Species::set_category(string species_category) {
  return set_string(this->species_category, species_category);
}

void Species::all_search() {
  cout << RESET BACKGROUND_BLUE FONT_WHITE
      "\n -> Espécie " BACKGROUND_WHITE FONT_BLUE
      "\n Nome da Espécie: " FONT_BLACK
       << get_name() << FONT_BLUE "\n Abreviaturas: " FONT_BLACK
       << get_abbreviations()
       << FONT_BLUE "\n Categoria da Espécie: " FONT_BLACK << get_category()
       << RESET;
}

void Species::conversion_strings(string (*replace)(string, char, char),
                                 char before, char after) {

  set_name(replace(get_name(), before, after));
  set_abbreviations(replace(get_abbreviations(), before, after));
  set_category(replace(get_category(), before, after));
}

ostream &operator<<(ostream &os, const Species &species) {
  os << species.name << " ";
  os << species.abbreviations << " ";
  os << species.species_category << " ";
  return os;
}

istream &operator>>(istream &is, Species &species) {
  is >> species.name >> species.abbreviations >> species.species_category;
  return is;
}