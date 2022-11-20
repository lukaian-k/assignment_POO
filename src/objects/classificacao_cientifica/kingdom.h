#include "../../../_config.h"
#include <string>

class Kingdom {
private:
  string name;
  string description;

public:
  // Kingdom();
  string get_kingdom_name();
  string get_kingdom_description();
  bool set_string(string &before, string after);
  bool set_kingdom_name(string name);
  bool set_kingdom_description(string description);
};