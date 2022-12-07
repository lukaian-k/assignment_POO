#include "../../../_config.hpp"
#include "../../objects/animal/animal.hpp"

class CRUD {
private:
  int select;
  enum { ALL = 1, MINIMUM, SPECIFY, BACK = 0 };
  bool is_valid = true;

  template <typename SEARCH> SEARCH _search();
  void _proceed();

public:
  void add(ostream &fp);
  void search(istream &fp);
  void update(fstream &fp);
  void remove(fstream &fp);
  void size();
};