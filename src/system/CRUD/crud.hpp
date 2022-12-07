#include "../../../_config.hpp"
#include "../../objects/animal/animal.hpp"

class CRUD {
private:
  int select;
  enum { ALL = 1, MINIMUM, SPECIFY, BACK = 0 };
  bool is_valid = true;

  template <typename SEARCH> SEARCH _search();

public:
  void add(ostream &fp);
  void search(istream &fp);
  void update();
  void remove();
  void size();
};