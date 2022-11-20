#include "../order.h"

string Order::get_order_name() {
  return order_name == "" ? "Informe esta informação primeiro." : order_name;
}

string Order::get_order_description() {
  return order_description == "" ? "Informe esta informação primeiro." : order_description;
}

bool Order::set_order_name(string order_name) { 
  return set_string(this->order_name, order_name); 
}

bool Order::set_order_description(string order_description) {
  return set_string(this->order_description, order_description);
}
