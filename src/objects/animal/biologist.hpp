#include "../../../_config.hpp"
#include "../auxiliary_objects/general_functions.hpp"

class Biologist : public General_functions {
private:
  string name;
  string nationality;
  string gender;

public:
  // Biologist();
  string get_biologist_name();
  string get_biologist_nationality();
  string get_biologist_gender();

  bool set_biologist_name(string name);
  bool set_biologist_nationality(string nationality);
  bool set_biologist_gender(string gender);
};