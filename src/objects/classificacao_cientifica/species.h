#include "genus.h"

class Species : public Genus {
private:
  string name;
  string abbreviations;
  string species_category;

public:
  // Species();
  string get_species_name();
  string get_species_abbreviations();
  string get_species_category();
  bool set_species_name(string name);
  bool set_species_abbreviations(string abbreviations);
  bool set_species_category(string species_category);
};