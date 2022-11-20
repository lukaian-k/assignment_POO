#include "phylum.h"

class Classe : public Phylum {
private:
  string class_name;
  string class_description;
  
public:
  //Classe(string class_name, string class_description) : Phylum (string name, string distinctive_characteristics);
  string get_class_name();
  string get_class_decription();
  bool set_class_name(string class_name);
  bool set_class_description(string class_description);
};
