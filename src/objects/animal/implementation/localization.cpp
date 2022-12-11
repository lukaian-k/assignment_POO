#include "../localization.hpp"

Localization::Localization(string (*replace)(string, char, char)) {

  system(CLEAR);
  cout << RESET BOLD BACKGROUND_BLUE FONT_WHITE " INFO >> LOCALIZACAO "
       << RESET "\n\n";

  set_geographical_distribution(
      builder_string(replace, "Distribuição geografica: "));

  set_habitat(builder_string(replace, "Habitat: "));

  set_discovery_point(builder_string(replace, "Lugar de descoberta: "));
}

string Localization::get_geographical_distribution() {
  return geographical_distribution == "" ? "Informe esta informação primeiro."
                                         : geographical_distribution;
}

string Localization::get_habitat() {
  return habitat == "" ? "Informe esta informação primeiro." : habitat;
}

string Localization::get_discovery_point() {
  return discovery_point == "" ? "Informe esta informação primeiro."
                               : discovery_point;
}

bool Localization::set_geographical_distribution(
    string geographical_distribution) {
  return set_string(this->geographical_distribution, geographical_distribution);
}

bool Localization::set_habitat(string habitat) {
  return set_string(this->habitat, habitat);
}

bool Localization::set_discovery_point(string discovery_point) {
  return set_string(this->discovery_point, discovery_point);
}