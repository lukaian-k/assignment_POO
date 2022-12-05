#include "../../../_config.hpp"
#include "../auxiliary_objects/general_functions.hpp"

class Kingdom : public General_functions {
private:
  string name;
  string description;

public:
  Kingdom() {}
  Kingdom(string (*replace)(string, char, char), char before, char after);

  string get_name();
  string get_description();

  bool set_name(string name);
  bool set_description(string description);

  void all_search();

  void conversion_strings(string (*replace)(string, char, char), char before,
                          char after);

  friend ostream &operator<<(ostream &os, const Kingdom &kingdom);
  friend istream &operator>>(istream &is, Kingdom &kingdom);
};