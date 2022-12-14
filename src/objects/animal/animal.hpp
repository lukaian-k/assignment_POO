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
  string extinction;
  bool is_active = true;

  Biologist biologist;
  Localization localization;

public:
  Animal() {}
  Animal(string (*replace)(string, char, char));

  string get_name();
  string get_binominal_name();
  string get_descriptive_characteristics();
  string get_extinction();
  bool get_active();

  bool set_name(string name);
  bool set_binominal_name(string binominal_name);
  bool set_descriptive_characteristics(string descriptive_characteristics);
  bool set_extinction(string extinction);
  void set_active();

  void all_search(int number);
  void minimum_search(int number);
  bool specify_search(string name, int number);

  void conversion_strings(string (*replace)(string, char, char), char before,
                          char after);

  friend ostream &operator<<(ostream &os, const Animal &animal);
  friend istream &operator>>(istream &is, Animal &animal);
};

#endif