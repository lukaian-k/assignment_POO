#include "../../../_config.hpp"
#include "../auxiliary_objects/general_functions.hpp"
#include <string>

class Kingdom : public General_functions {
private:
  string name;
  string description;

public:
  // Kingdom();
  string get_kingdom_name();
  string get_kingdom_description();
  bool set_kingdom_name(string name);
  bool set_kingdom_description(string description);
};