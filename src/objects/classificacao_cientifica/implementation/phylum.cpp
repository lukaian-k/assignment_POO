#include "../phylum.hpp"

Phylum::Phylum(string (*replace)(string, char, char), char before,
             char after) : Kingdom(replace, ' ', '-') {

  set_name(replace(get_name(), before, after));

  set_distinctive_characteristics(replace(get_distinctive_characteristics(), before, after));
}

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

void Phylum::all_search() {
  cout << RESET BACKGROUND_BLUE FONT_WHITE
      "\n -> Phylum " BACKGROUND_WHITE FONT_BLUE "\n Nome da Phylum: " FONT_BLACK
       << get_name() << FONT_BLUE "\n Descrição: " FONT_BLACK
       << get_distinctive_characteristics() << RESET;
}

void Phylum::conversion_strings(string (*replace)(string, char, char),
                               char before, char after) {

  set_name(replace(get_name(), before, after));
  set_distinctive_characteristics(replace(get_distinctive_characteristics(), before, after));
}

ostream &operator<<(ostream &os, const Phylum &phylum) {
  os << "\n" << phylum.name << "\n";
  os << phylum.distinctive_characteristics;
  return os;
}

istream &operator>>(istream &is, Phylum &phylum) {
  is >> phylum.name >> phylum.distinctive_characteristics;
  return is;
}