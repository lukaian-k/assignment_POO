#include "../kingdom.h"

bool Kingdom::set_string(string &before, string after) {
  if (typeid(after) == typeid(string) && after != "") {
    before = after;
    return true;
  }
  return false;
}