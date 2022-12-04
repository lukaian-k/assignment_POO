#ifndef ANIMAL
#define ANIMAL

#include "../classificacao_cientifica/species.hpp"
#include "./biologist.hpp"
#include "./localization.hpp"

class Animal : public Species {
private:
  string name;
  string binominal_name;
  string descriptive_characteristics;
  float life_span;
  string extinction;
  bool is_active = true;

public:
  Animal() {}
  Animal(string (*replace)(string, char, char));

  string get_animal_name();
  string get_animal_binominal_name();
  string get_animal_descriptive_characteristics();
  string get_animal_extinction();
  bool get_active();

  bool set_animal_name(string name);
  bool set_animal_binominal_name(string binominal_name);
  bool
  set_animal_descriptive_characteristics(string descriptive_characteristics);
  bool set_animal_extinction(string extinction);
  void set_active();

  void all_search();
  void minimum_search();
  void specify_search();

  friend ostream &operator<<(ostream &os, const Animal &animal);
  friend istream &operator>>(istream &is, Animal &animal);
};

#endif