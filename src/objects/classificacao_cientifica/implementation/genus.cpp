#include "../genus.hpp"

string Genus::get_genus_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Genus::get_genus_aspects() {
  return aspects == "" ? "Informe esta informação primeiro." : aspects;
}

bool Genus::set_genus_name(string name) { return set_string(this->name, name); }

bool Genus::set_genus_aspects(string aspects) {
  return set_string(this->aspects, aspects);
}