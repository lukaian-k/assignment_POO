#include "family.h"

class Genus : public Family {
private:
  string name;
  string aspects;

public:
  // Genus();
  string get_genus_name();
  string get_genus_aspects();
  bool set_genus_name(string name);
  bool set_genus_aspects(string aspects);
};