#include "../auxiliary_objects/general_functions.hpp"
#include <string>

class Localization : public General_functions {
private:
  std::string geographical_distribution;
  std::string habitat;
  std::string discovery_point;

public:
  // Localization();
  std::string get_localization_geographical_distribution();
  std::string get_localization_habitat();
  std::string get_localization_discovery_point();

  bool set_localization_geographical_distribution(std::string geographical_distribution);
  bool set_localization_habitat(std::string habitat);
  bool set_localization_discovery_point(std::string discovery_point);
};