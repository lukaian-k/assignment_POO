#include "genus.hpp"

class Species : public Genus {
private:
  string name;
  string abbreviations;
  string species_category;

public:
  Species() {}
  Species(string (*replace)(string, char, char), char before, char after);

  string get_name();
  string get_abbreviations();
  string get_category();

  bool set_name(string name);
  bool set_abbreviations(string abbreviations);
  bool set_category(string species_category);

  void all_search();

  void conversion_strings(string (*replace)(string, char, char), char before,
                          char after);

  friend ostream &operator<<(ostream &os, const Species &species);
  friend istream &operator>>(istream &is, Species &species);
};