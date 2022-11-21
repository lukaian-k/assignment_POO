#include "../../../_config.hpp"
#include <string>

class Kingdom {
protected:
  bool set_string(string &before, string after);

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