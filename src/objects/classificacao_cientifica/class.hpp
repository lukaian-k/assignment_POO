#include "phylum.hpp"

class Classe : public Phylum {
private:
  string name;
  string description;

public:
  Classe() {}
  Classe(string (*replace)(string, char, char), char before, char after);

  string get_name();
  string get_description();
  
  bool set_name(string class_name);
  bool set_description(string class_description);

  void all_search();

  void conversion_strings(string (*replace)(string, char, char), char before,
                          char after);

  friend ostream &operator<<(ostream &os, const Classe &classe);
  friend istream &operator>>(istream &is, Classe &classe);
};
