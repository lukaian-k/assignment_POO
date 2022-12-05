#include "family.hpp"

class Genus : public Family {
private:
  string name;
  string aspects;

public:
  Genus() {}
  Genus(string (*replace)(string, char, char), char before, char after);

  string get_name();
  string get_aspects();

  bool set_name(string name);
  bool set_aspects(string aspects);

  void all_search();

  void conversion_strings(string (*replace)(string, char, char), char before,
                          char after);

  friend ostream &operator<<(ostream &os, const Genus &genus);
  friend istream &operator>>(istream &is, Genus &genus);
};