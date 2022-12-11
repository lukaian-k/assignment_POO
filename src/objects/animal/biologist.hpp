#include "../../../_config.hpp"
#include "../auxiliary_objects/general_functions.hpp"

class Biologist : public General_functions {
private:
  string name;
  string nationality;
  string gender;
  string birth_date;

public:
  Biologist() {}
  Biologist(string (*replace)(string, char, char));

  string get_name();
  string get_nationality();
  string get_gender();
  string get_birth_date();

  bool set_name(string name);
  bool set_nationality(string nationality);
  bool set_gender(string gender);
  bool set_birth_date(string birth_date);

  void all_search();

  void conversion_strings(string (*replace)(string, char, char), char before,
                          char after);

  friend ostream &operator<<(ostream &os, const Biologist &biologist);
  friend istream &operator>>(istream &is, Biologist &biologist);
};