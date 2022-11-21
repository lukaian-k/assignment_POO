#include "./src/objects/animal/animal.hpp"

int main() {
  Animal a;
  cout << a.get_animal_name() << endl;
  a.set_kingdom_name("animal");
  cout << a.get_kingdom_name() << endl;
  return 0;
}