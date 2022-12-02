#include "../crud.hpp"

string replace(string word, char before, char after) {
  for (int i = 0; i <= word.length(); i++) {
    if (word[i] == before) {
      word[i] = after;
    }
  }
  return word;
}

void conversion_strings(Animal &animal) {
  animal.set_animal_name(replace(animal.get_animal_name(), '-', ' '));

  animal.set_animal_binominalName(
      replace(animal.get_animal_binominalName(), '-', ' '));

  animal.set_animal_descriptive_characteristics(
      replace(animal.get_animal_descriptive_characteristics(), '-', ' '));

  animal.set_animal_extinction(
      replace(animal.get_animal_extinction(), '-', ' '));
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

    animal.set_animal_descriptive_characteristics(
        replace(animal.get_animal_descriptive_characteristics(), ' ', '-'));

    animal.set_animal_extinction(
        replace(animal.get_animal_extinction(), ' ', '-'));

    fp << animal; // by inserting in the file
  } else {
    cout << RESET BACKGROUND_RED FONT_WHITE
        "Erro ao abrir o arquivo: database.txt"
         << endl;
  }
}

void CRUD::search(istream &fp, Animal &animal) {
  while (true) {
    system(CLEAR);

    if (is_valid == false) {
      cout << BOLD FONT_RED "Selecione uma opção valida! \n" << endl;
      is_valid = true;
    }

    cout << RESET BOLD BACKGROUND_BLUE
        "      --- SEARCH ---     \n" RESET BACKGROUND_WHITE FONT_BLUE
        " 1 - Exibição Detalhada. \n"
        " 2 - Exibição Simples.   \n"
        " 3 - Busca Especifica.   \n"
        " 0 - Voltar.  " RESET FONT_BLUE
         << endl;

    fflush(stdin);
    cin >> select;

    switch (select) {

    case ALL: {
      cout << RESET BACKGROUND_GREEN FONT_WHITE "TODOS >> ANIMAIS" << endl;

      if (fp.good()) {
        while (!fp.eof()) {
          if (fp.eof())
            return;

          fp >> animal; // extracts from the file
          conversion_strings(animal);
          animal.all_search();
        }
        char back;
        cout << RESET BACKGROUND_GREEN FONT_WHITE
            " Pressione qualquer tecla para continuar... ";
        cin >> back;
      } else {
        cout << RESET BACKGROUND_RED FONT_WHITE
            "Erro ao abrir o arquivo: database.txt"
             << endl;
      }
      return;
    }
    case MINIMUM: {
      break;
    }
    case SPECIFY: {
      break;
    }
    case BACK: {
      return;
    }
    default:
      is_valid = false;
    }
  }
}

void CRUD::update(ostream &fp, Animal &animal) {}

void CRUD::remove(ostream &fp, Animal &animal) {}

void CRUD::size() {}