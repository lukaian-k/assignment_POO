#include "../family.h"

string Family::get_family_name() {
  return name == "" ? "Informe esta informação primeiro." : name;
}

string Family::get_family_description() {
  return description == "" ? "Informe esta informação primeiro." : description;
}