#include "genus.h"

class Species {
private:
  string species_name;
  string abbreviations;
  string species_category;

public:
  Species();
  string get_species_name();
  string get_abbreviations();
  string get_species_category();
  bool set_species_name();
  bool set_abbreviations();
  bool set_species_category();
};