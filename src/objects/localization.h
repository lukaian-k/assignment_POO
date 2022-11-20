#include <string>
using namespace std;

class Localization {
private:
  string geographicalDistribution;
  string habitat;
  string discoveryPoint;

public:
  //Localization();
  string get_localization_geographicalDistribution();
  string get_localization_habitat();
  string get_localization_discoveryPoint();

  bool set_localization_geographicalDistribution(string geographicalDistribution);
  bool set_localization_habitat(string habitat);
  bool set_localization_discoveryPoint(string discoveryPoint);
};