#include "../../../_config.hpp"
#include "../../objects/animal/animal.hpp"

class CRUD {
private:
  int select;
  enum { ALL = 1, MINIMUM, SPECIFY, BACK = 0 };
  bool is_valid = true;

public:
  void add(ostream &fp, Animal &animal);
  void search(istream &fp, Animal &animal);
  void update(ostream &fp, Animal &animal);
  void remove(ostream &fp, Animal &animal);
  void size();
};