#include "../class.hpp"

Classe::Classe(string (*replace)(string, char, char), char before, char after)
    : Phylum(replace, ' ', '-') {

  system(CLEAR);
  cout << RESET BOLD BACKGROUND_BLUE FONT_WHITE " INFO >> ANIMAL "
       << RESET "\n\n";

  set_name(builder_string(replace, "Insira o nome: "));

  set_description(builder_string(replace, "Insira a descrição: "));
}

string Classe::get_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Classe::get_description() {
  return description == "" ? "Informe esta informação primeiro." : description;
}

bool Classe::set_name(string name) { return set_string(this->name, name); }

bool Classe::set_description(string description) {
  return set_string(this->description, description);
}

void Classe::all_search() {
  cout << RESET BACKGROUND_BLUE FONT_WHITE
      "\n -> Classe " BACKGROUND_WHITE FONT_BLUE
      "\n Nome da Classe: " FONT_BLACK
       << get_name() << FONT_BLUE "\n Descrição: " FONT_BLACK
       << get_description() << RESET;
}

void Classe::conversion_strings(string (*replace)(string, char, char),
                                char before, char after) {

  set_name(replace(get_name(), before, after));
  set_description(replace(get_description(), before, after));
}

ostream &operator<<(ostream &os, const Classe &classe) {
  os << classe.name << "\n";
  os << classe.description << "\n";
  return os;
}

istream &operator>>(istream &is, Classe &classe) {
  is >> classe.name >> classe.description;
  return is;
}
