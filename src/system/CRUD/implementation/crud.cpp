#include "../crud.hpp"
#include <iostream>

void CRUD::add(Animal &animal) {
  ofstream fp("database.dat", ios::app);
  if (fp.is_open()) {
    fp.write(reinterpret_cast<const char *>(&animal), sizeof(Animal));
  } else {
    cout << RESET FONT_RED " Erro ao abrir o arquivo: database.dat ";
  }
  fp.close();
}

void CRUD::search() {}

void CRUD::update() {}

void CRUD::remove() {}

void CRUD::size() {
  ifstream fp("database.dat");
  if (fp.is_open()) {
    Animal animal;
    int i = 0;
    while (fp.read((char *)&animal, sizeof(Animal))) {
      if (animal.get_active() == true)
        i++;
    }
    cout << RESET BACKGROUND_WHITE FONT_GREEN "Animais cadastrados: " << i
         << endl;
  }
  fp.close();
}