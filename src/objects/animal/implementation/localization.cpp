#include "../localization.hpp"

std::string Localization::get_localization_geographical_distribution() {
  return geographical_distribution == "" ? "Informe esta informação primeiro."
                                         : geographical_distribution;
}

std::string Localization::get_localization_habitat() {
  return habitat == "" ? "Informe esta informação primeiro." : habitat;
}

std::string Localization::get_localization_discovery_point() {
  return discovery_point == "" ? "Informe esta informação primeiro."
                               : discovery_point;
}

bool Localization::set_localization_geographical_distribution(
    std::string geographical_distribution) {
  return set_string(this->geographical_distribution, geographical_distribution);
}

bool Localization::set_localization_habitat(std::string habitat) {
  return set_string(this->habitat, habitat);
}

bool Localization::set_localization_discovery_point(
    std::string discovery_point) {
  return set_string(this->discovery_point, discovery_point);
}