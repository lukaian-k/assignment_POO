#include "class.hpp"

class Order : public Classe {
private:
  string order_name;
  string order_description;

public:
  Order() {}
  Order(string (*replace)(string, char, char), char before, char after);

  string get_name();
  string get_description();

  bool set_name(string order_name);
  bool set_description(string order_description);

  void all_search();

  void conversion_strings(string (*replace)(string, char, char), char before,
                          char after);

  friend ostream &operator<<(ostream &os, const Order &order);
  friend istream &operator>>(istream &is, Order &order);
};
