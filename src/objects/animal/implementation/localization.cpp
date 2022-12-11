#include "../localization.hpp"

Localization::Localization(string (*replace)(string, char, char)) {

  system(CLEAR);
  cout << RESET BOLD BACKGROUND_BLUE FONT_WHITE " INFO >> LOCALIZACAO "
       << RESET "\n\n";

  set_geographical_distribution(
      builder_string(replace, "Distribuição geográfica: "));

  set_habitat(builder_string(replace, "Habitat: "));

  set_discovery_point(builder_string(replace, "Lugar de descoberta: "));

  set_discovery_date(builder_string(replace, "Data de descoberta: "));
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

string Localization::get_discovery_date() {
  return discovery_date == "" ? "Informe esta informação primeiro."
                              : discovery_date;
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

bool Localization::set_discovery_date(string discovery_date) {
  return set_string(this->discovery_date, discovery_date);
}

void Localization::all_search() {
  cout << RESET BACKGROUND_BLUE FONT_WHITE
      "\n -> Localização " BACKGROUND_WHITE FONT_BLUE
      "\n Distribuição Geográfica: " FONT_BLACK
       << get_geographical_distribution() + " "
       << FONT_BLUE "\n Habitat: " FONT_BLACK << get_habitat() + " "
       << FONT_BLUE "\n Ponto de Descoberta: " FONT_BLACK
       << get_discovery_point() + " "
       << FONT_BLUE "\n Data de Descoberta: " FONT_BLACK
       << get_discovery_date() + " " << RESET;
}

void Localization::conversion_strings(string (*replace)(string, char, char),
                                      char before, char after) {

  set_geographical_distribution(
      replace(get_geographical_distribution(), before, after));

  set_habitat(replace(get_habitat(), before, after));

  set_discovery_point(replace(get_discovery_point(), before, after));

  set_discovery_date(replace(get_discovery_date(), before, after));
}

ostream &operator<<(ostream &os, const Localization &localization) {
  os << localization.geographical_distribution << " ";
  os << localization.habitat << " ";
  os << localization.discovery_point << " ";
  os << localization.discovery_date << "\n";
  return os;
}

istream &operator>>(istream &is, Localization &localization) {
  is >> localization.geographical_distribution >> localization.habitat >>
      localization.discovery_point >> localization.discovery_date;
  return is;
}