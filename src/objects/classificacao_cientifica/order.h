#include "class.h"

class Order : public Classe {
private:
  string order_name;
  string order_description;

public:
  Order(string order_name, string order_description) : Classe (string class_name, string class_description);
  string get_order_name();
  string get_order_decription();
  bool set_order_name(string order_name);
  bool set_order_description(string order_description);
};
