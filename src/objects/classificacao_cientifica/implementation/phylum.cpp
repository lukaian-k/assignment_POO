#include "../phylum.hpp"

string Phylum::get_phylum_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Phylum::get_phylum_distinctive_characteristics() {
  return distinctive_characteristics == "" ? "Informe esta informação primeiro."
                                           : distinctive_characteristics;
}

bool Phylum::set_phylum_name(string name) {
  return set_string(this->name, name);
}

bool Phylum::set_phylum_distinctive_characteristics(
    string distinctive_characteristics) {
  return set_string(this->distinctive_characteristics,
                    distinctive_characteristics);
}