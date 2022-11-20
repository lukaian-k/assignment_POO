#include "phylum.h"

class Classe : public Phylum {
private:
  string class_name;
  string description;
  
public:
  Classe(string class_name) : Phylum (string name, string distinctive_characteristics);
  string get_class_name();
  string get_decription();
  bool set_class_name(string class_name);
  bool set_description(string description);
};
