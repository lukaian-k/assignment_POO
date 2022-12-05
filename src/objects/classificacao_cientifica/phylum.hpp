#include "kingdom.hpp"

class Phylum : public Kingdom {
private:
  string name;
  string distinctive_characteristics;

public:
  Phylum() {}
  Phylum(string (*replace)(string, char, char), char before, char after);

  string get_name();
  string get_distinctive_characteristics();

  bool set_name(string name);
  bool set_distinctive_characteristics(string distinctive_characteristics);

  void all_search();

  void conversion_strings(string (*replace)(string, char, char), char before,
                          char after);

  friend ostream &operator<<(ostream &os, const Phylum &phylum);
  friend istream &operator>>(istream &is, Phylum &phylum);
};