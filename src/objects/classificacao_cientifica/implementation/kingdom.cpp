#include "../kingdom.h"

bool Kingdom::set_string(string &before, string after) {
  if (after != "" && typeid(before) == typeid(string) &&
      typeid(after) == typeid(string)) {
    before = after;
    return true;
  }
  return false;
}