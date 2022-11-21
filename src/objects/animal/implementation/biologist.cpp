#include "../biologist.h"

std::string Biologist::get_biologist_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

std::string Biologist::get_biologist_nationality() {
  return nationality == "" ? "Informe esta informação primeiro." : nationality;
}

std::string Biologist::get_biologist_gender() {
  return gender == "" ? "Informe esta informação primeiro." : gender;
}

bool Biologist::set_biologist_name(std::string name) {
  return set_string(this->name, name);
}

bool Biologist::set_biologist_nationality(std::string nationality) {
  return set_string(this->nationality, nationality);
}

bool Biologist::set_biologist_gender(std::string gender) {
  return set_string(this->gender, gender);
}