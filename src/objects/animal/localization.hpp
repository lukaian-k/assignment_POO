#include "../../../_config.hpp"
#include "../auxiliary_objects/general_functions.hpp"

class Localization : public General_functions {
private:
  string geographical_distribution;
  string habitat;
  string discovery_point;
  string discovery_date;

public:
  Localization() {}
  Localization(string (*replace)(string, char, char));

  string get_geographical_distribution();
  string get_habitat();
  string get_discovery_point();
  string get_discovery_date();

  bool set_geographical_distribution(string geographical_distribution);
  bool set_habitat(string habitat);
  bool set_discovery_point(string discovery_point);
  bool set_discovery_date(string discovery_date);

  void all_search();

  void conversion_strings(string (*replace)(string, char, char), char before,
                          char after);

  friend ostream &operator<<(ostream &os, const Localization &localization);
  friend istream &operator>>(istream &is, Localization &localization);
};