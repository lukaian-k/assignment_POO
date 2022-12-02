#include "../crud.hpp"

string replace(string word, char before, char after) {
  for (int i = 0; i <= word.length(); i++) {
    if (word[i] == before) {
      word[i] = after;
    }
  }
  return word;
}

void CRUD::add(ostream &fp, Animal &animal) {
  if (fp.good()) {
    cout << "nome: ";
    string name;
    fflush(stdin);
    getline(std::cin >> std::ws, name);
    animal.set_animal_name(replace(name, ' ', '-'));
    animal.set_animal_binominalName(
        replace(animal.get_animal_binominalName(), ' ', '-'));

    fp << animal; // by inserting in the file
  } else {
    cout << RESET BACKGROUND_RED FONT_WHITE
        "Erro ao abrir o arquivo: database.txt"
         << endl;
  }
}

void CRUD::search(istream &fp, Animal &animal) {

  cout << "all people" << endl;

  if (fp.good()) {
    while (!fp.eof()) {
      fp >> animal; // extracts from the file

      cout << "nome: " << replace(animal.get_animal_name(), '-', ' ') << "\n";
      cout << "binominal: "
           << replace(animal.get_animal_binominalName(), '-', ' ') << "\n\n";
    }
  } else {
    cout << RESET BACKGROUND_RED FONT_WHITE
        "Erro ao abrir o arquivo: database.txt"
         << endl;
  }
}

void CRUD::update(ostream &fp, Animal &animal) {}

void CRUD::remove(ostream &fp, Animal &animal) {}

void CRUD::size() {}