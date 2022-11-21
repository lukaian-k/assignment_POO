#include "../species.hpp"

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