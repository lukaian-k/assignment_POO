#include "order.hpp"

class Family : public Order {
private:
  string name;
  string description;

public:
  // Family();
  string get_family_name();
  string get_family_description();
  bool set_family_name(string name);
  bool set_family_description(string description);
};