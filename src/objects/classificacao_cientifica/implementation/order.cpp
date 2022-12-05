#include "../order.hpp"

string Order::get_name() {
  return order_name == "" ? "Informe esta informação primeiro." : order_name;
}

string Order::get_description() {
  return order_description == "" ? "Informe esta informação primeiro." : order_description;
}

bool Order::set_name(string order_name) { 
  return set_string(this->order_name, order_name); 
}

bool Order::set_description(string order_description) {
  return set_string(this->order_description, order_description);
}
