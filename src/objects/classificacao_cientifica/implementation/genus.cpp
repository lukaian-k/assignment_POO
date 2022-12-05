#include "../genus.hpp"

string Genus::get_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Genus::get_aspects() {
  return aspects == "" ? "Informe esta informação primeiro." : aspects;
}

bool Genus::set_name(string name) { return set_string(this->name, name); }

bool Genus::set_aspects(string aspects) {
  return set_string(this->aspects, aspects);
}