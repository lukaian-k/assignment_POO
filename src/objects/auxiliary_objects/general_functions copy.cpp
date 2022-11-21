#include "general_functions.h"
#include <ios>

bool General_functions::set_string(std::string &before, std::string after) {
  try {
    if (after != "" && typeid(before) == typeid(std::string) &&
        typeid(after) == typeid(std::string)) {
      before = after;
      return true;
    }
    throw false;
  } catch (bool answer) {
    return answer;
  }
}