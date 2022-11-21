#include "../class.hpp"

string Classe::get_class_name() {
  return class_name == "" ? "Informe esta informação primeiro." : class_name;
}

string Classe::get_class_description() {
  return class_description == "" ? "Informe esta informação primeiro." : class_description;
}

bool Classe::set_class_name(string class_name) { 
  return set_string(this->class_name, class_name); 
}

bool Classe::set_class_description(string class_description) {
  return set_string(this->class_description, class_description);
}
