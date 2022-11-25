#include "../general_functions.hpp"

bool General_functions::set_string(string &before, string after) {
  try {
    if (after != "" && typeid(before) == typeid(string) &&
        typeid(after) == typeid(string)) {
      before = after;
      return true;
    }
    throw false;
  } catch (bool answer) {
    return answer;
  }
}