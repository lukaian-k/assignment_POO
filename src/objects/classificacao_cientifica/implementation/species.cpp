#include "../species.h"

string Species::get_species_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Species::get_species_abbreviations() {
  return abbreviations == "" ? "Informe esta informação primeiro." : abbreviations;
}

string Species::get_species_category() {
  return species_category == "" ? "Informe esta informação primeiro." : species_category;
}

bool Species::set_species_name(string name) {
  this->name = name;
  return true;
}

bool Species::set_species_abbreviations(string abbreviations) {
  this->abbreviations = abbreviations;
  return true;
}

bool Species::set_species_category(string species_category) {
  this->species_category = species_category;
  return true;
}