#include "../phylum.hpp"

string Phylum::get_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Phylum::get_distinctive_characteristics() {
  return distinctive_characteristics == "" ? "Informe esta informação primeiro."
                                           : distinctive_characteristics;
}

bool Phylum::set_name(string name) { return set_string(this->name, name); }

bool Phylum::set_distinctive_characteristics(
    string distinctive_characteristics) {
  return set_string(this->distinctive_characteristics,
                    distinctive_characteristics);
}