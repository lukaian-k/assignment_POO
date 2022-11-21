#include "../auxiliary_objects/general_functions.hpp"
#include <string>

class Biologist : public General_functions {
private:
  std::string name;
  std::string nationality;
  std::string gender;

public:
  // Biologist();
  std::string get_biologist_name();
  std::string get_biologist_nationality();
  std::string get_biologist_gender();

  bool set_biologist_name(std::string name);
  bool set_biologist_nationality(std::string nationality);
  bool set_biologist_gender(std::string gender);
};