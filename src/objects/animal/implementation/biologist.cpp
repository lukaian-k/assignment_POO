#include "../biologist.hpp"

Biologist::Biologist(string (*replace)(string, char, char)){

  system(CLEAR);
  cout << RESET BOLD BACKGROUND_BLUE FONT_WHITE " INFO >> BIOLOGO "
       << RESET "\n\n";

  set_name(builder_string(replace, "Insira o nome: "));

  set_nationality(builder_string(replace, "Nacionalidade: "));

  set_gender(builder_string(replace, "Gênero: "));

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

bool Biologist::set_name(string name) {
  return set_string(this->name, name);
}

bool Biologist::set_nationality(string nationality) {
  return set_string(this->nationality, nationality);
}

bool Biologist::set_gender(string gender) {
  return set_string(this->gender, gender);
}