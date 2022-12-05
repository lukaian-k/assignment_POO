#include "order.hpp"

class Family : public Order {
private:
  string name;
  string description;

public:
  Family() {}
  Family(string (*replace)(string, char, char), char before, char after);

  string get_name();
  string get_description();

  bool set_name(string name);
  bool set_description(string description);

  void all_search();

  void conversion_strings(string (*replace)(string, char, char), char before,
                          char after);

  friend ostream &operator<<(ostream &os, const Family &family);
  friend istream &operator>>(istream &is, Family &family);
};