#include "family.h"

class Genus {
private:
  string genus_name;
  string genus_aspects;

public:
  Genus();
  string get_genus_name();
  string get_genus_aspects();
  bool set_genus_name();
  bool set_genus_aspects();
};