#ifndef ANIMAL
#define ANIMAL

#include "../classificacao_cientifica/species.hpp"
#include "./biologist.hpp"
#include "./localization.hpp"

class Animal : public Species {
private:
  string name;
  string binominalName;
  string descriptive_characteristics;
  float life_span;
  string extinction;
  bool is_active = true;

public:
  // Animal();
  string get_animal_name();
  string get_animal_binominalName();
  string get_animal_descriptive_characteristics();
  string get_animal_extinction();
  bool get_active();

  bool set_animal_name(string name);
  bool set_animal_binominalName(string binominalName);
  bool
  set_animal_descriptive_characteristics(string descriptive_characteristics);
  bool set_animal_extinction(string extinction);
  void set_active();
};

#endif