#include "./classificacao_cientifica/species.h"

class Animal : public Species {
private:
  string name;
  string binominalName;
  string descriptiveCharacteristics;
  string extinction;

public:
  //Animal();
  string get_animal_name();
  string get_animal_binominalName();
  string get_animal_descriptiveCharacteristics();
  string get_animal_extinction();

  bool set_animal_name(string name);
  bool set_animal_binominalName(string binominalName);
  bool set_animal_descriptiveCharacteristics(string descriptiveCharacteristics);
  bool set_animal_extinction(string extinction);
};