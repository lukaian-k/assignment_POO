#include "../localization.h"

string Localization::get_localization_geographicalDistribution() {
  return geographicalDistribution == "" ? "Informe esta informação primeiro." : geographicalDistribution;
}

string Localization::get_localization_habitat() {
  return habitat == "" ? "Informe esta informação primeiro." : habitat;
}

string Localization::get_localization_discoveryPoint() {
  return discoveryPoint == "" ? "Informe esta informação primeiro." : discoveryPoint;
}


bool Localization::set_localization_geographicalDistribution(string geographicalDistribution) {
  //return set_string(this->geographicalDistribution, geographicalDistribution);
}

bool Localization::set_localization_habitat(string habitat) {
  //return set_string(this->habitat, habitat);
}

bool Localization::set_localization_discoveryPoint(string discoveryPoint) {
  //return set_string(this->discoveryPoint, discoveryPoint);
}