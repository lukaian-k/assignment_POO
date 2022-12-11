#include "../biologist.hpp"

Biologist::Biologist(string (*replace)(string, char, char)) {

  system(CLEAR);
  cout << RESET BOLD BACKGROUND_BLUE FONT_WHITE " INFO >> BIOLOGO "
       << RESET "\n\n";

  set_name(builder_string(replace, "Insira o nome: "));

  set_nationality(builder_string(replace, "Nacionalidade: "));

  set_gender(builder_string(replace, "Gênero: "));

  set_birth_date(builder_string(replace, "Data de Nascimento: "));
}

string Biologist::get_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Biologist::get_nationality() {
  return nationality == "" ? "Informe esta informação primeiro." : nationality;
}

string Biologist::get_gender() {
  return gender == "" ? "Informe esta informação primeiro." : gender;
}

string Biologist::get_birth_date() {
  return birth_date == "" ? "Informe esta informação primeiro." : birth_date;
}

bool Biologist::set_name(string name) { return set_string(this->name, name); }

bool Biologist::set_nationality(string nationality) {
  return set_string(this->nationality, nationality);
}

bool Biologist::set_gender(string gender) {
  return set_string(this->gender, gender);
}

bool Biologist::set_birth_date(string birth_date) {
  return set_string(this->birth_date, birth_date);
}

void Biologist::all_search() {
  cout << RESET BACKGROUND_BLUE FONT_WHITE
      "\n -> Biologo " BACKGROUND_WHITE FONT_BLUE "\n Nome: " FONT_BLACK
       << get_name() + " " << FONT_BLUE "\n Nacionalidade: " FONT_BLACK
       << get_nationality() + " " << FONT_BLUE "\n Gênero: " FONT_BLACK
       << get_gender() + " " << FONT_BLUE "\n Data de Nascimento: " FONT_BLACK
       << get_birth_date() + " " << RESET;
}

void Biologist::conversion_strings(string (*replace)(string, char, char),
                                   char before, char after) {

  set_name(replace(get_name(), before, after));

  set_nationality(replace(get_nationality(), before, after));

  set_gender(replace(get_gender(), before, after));

  set_birth_date(replace(get_birth_date(), before, after));
}

ostream &operator<<(ostream &os, const Biologist &biologist) {
  os << biologist.name << " ";
  os << biologist.nationality << " ";
  os << biologist.gender << " ";
  os << biologist.birth_date << " ";
  return os;
}

istream &operator>>(istream &is, Biologist &biologist) {
  is >> biologist.name >> biologist.nationality >> biologist.gender >>
      biologist.birth_date;
  return is;
}