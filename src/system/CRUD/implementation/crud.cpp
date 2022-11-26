#include "../crud.hpp"

void CRUD::add(ostream &fp, Animal &animal) {
  cout << "nome: ";
  string name;
  getline(std::cin >> std::ws, name);
  animal.set_animal_name(name);

  fp << animal; // by inserting in the file
}

void CRUD::search(istream &fp, Animal &animal) {
  cout << "all people" << endl;

  if (fp.good()) {
    while (!fp.eof()) {
      // if (fp.eof())
      //   return;
      fp >> animal; // extracts from the file

      cout << "nome: " << animal.get_animal_name() << "\n";
    }
  } else {
    cout << "Falha ao abrir o arquivo!\n\n";
  }
}

void CRUD::update(ostream &fp, Animal &animal) {}

void CRUD::remove(ostream &fp, Animal &animal) {}

void CRUD::size() {}