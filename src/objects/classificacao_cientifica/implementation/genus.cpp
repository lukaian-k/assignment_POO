#include "../genus.h"

string Genus::get_genus_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Genus::get_genus_aspects() {
  return aspects == "" ? "Informe esta informação primeiro." : aspects;
}

bool Genus::set_genus_name(string name) {
  this->name = name;
  return true;
}

bool Genus::set_genus_aspects(string aspects) {
  this->aspects = aspects;
  return true;
}