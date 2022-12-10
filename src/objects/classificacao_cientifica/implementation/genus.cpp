#include "../genus.hpp"

Genus::Genus(string (*replace)(string, char, char), char before, char after)
    : Family(replace, ' ', '-') {

  system(CLEAR);
  cout << RESET BOLD BACKGROUND_BLUE FONT_WHITE " INFO >> GENERO "
       << RESET "\n\n";

  set_name(builder_string(replace, "Insira o genero: "));

  set_aspects(builder_string(replace, "Aspectos: "));
}

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

void Genus::all_search() {
  cout << RESET BACKGROUND_BLUE FONT_WHITE
      "\n -> Género " BACKGROUND_WHITE FONT_BLUE
      "\n Nome do Género: " FONT_BLACK
       << get_name() << FONT_BLUE "\n Aspectos: " FONT_BLACK << get_aspects()
       << RESET;
}

void Genus::conversion_strings(string (*replace)(string, char, char),
                               char before, char after) {

  set_name(replace(get_name(), before, after));
  set_aspects(replace(get_aspects(), before, after));
}

ostream &operator<<(ostream &os, const Genus &genus) {
  os << genus.name << "\n";
  os << genus.aspects << "\n";
  return os;
}

istream &operator>>(istream &is, Genus &genus) {
  is >> genus.name >> genus.aspects;
  return is;
}