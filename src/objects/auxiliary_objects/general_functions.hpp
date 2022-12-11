#ifndef GENERAL_FUNCTIONS
#define GENERAL_FUNCTIONS

#include "../../../_config.hpp"

class General_functions {

private:
  static bool is_active;

protected:
  bool set_string(string &before, string after);

  string builder_string(string (*replace)(string, char, char), string text);
};

#endif