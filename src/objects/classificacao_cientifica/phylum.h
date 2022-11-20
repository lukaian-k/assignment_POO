#include "kingdom.h"

class Phylum : public Kingdom {
private:
    string name
    string distinctive_characteristics

public:
    // Phylum()
    string get_phylum_name();
    string get_phylum_distinctive_characteristics();
    bool set_phylum_name(string name);
    bool set_phylum_distinctive_characteristics(string distinctive_characteristics);
};