#include "../../../_config.hpp"
#include "../auxiliary_objects/general_functions.hpp"

class Localization : public General_functions {
private:
  string geographical_distribution;
  string habitat;
  string discovery_point;

public:
  // Localization();
  string get_localization_geographical_distribution();
  string get_localization_habitat();
  string get_localization_discovery_point();

  bool set_localization_geographical_distribution(string geographical_distribution);
  bool set_localization_habitat(string habitat);
  bool set_localization_discovery_point(string discovery_point);
};