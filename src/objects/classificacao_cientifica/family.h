#include "order.h"

class Family {
private:
  string family_name;
  string description;

public:
  Family();
  string get_family_name();
  string get_description();
  bool set_family_name(string family_name);
  bool set_description(string description);
};