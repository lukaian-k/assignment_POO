#include "../../../_config.hpp"
#include "../auxiliary_objects/general_functions.hpp"

class Biologist : public General_functions {
private:
  string name;
  string nationality;
  string gender;

public:
  Biologist() {}
  Biologist(string (*replace)(string, char, char));
  
  string get_name();
  string get_nationality();
  string get_gender();

  bool set_name(string name);
  bool set_nationality(string nationality);
  bool set_gender(string gender);
};