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

  animal.set_animal_binominal_name(
      replace(animal.get_animal_binominal_name(), '-', ' '));

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

    animal.set_animal_binominal_name(
        replace(animal.get_animal_binominal_name(), ' ', '-'));

    animal.set_animal_descriptive_characteristics(
        replace(animal.get_animal_descriptive_characteristics(), ' ', '-'));

    animal.set_animal_extinction(
        replace(animal.get_animal_extinction(), ' ', '-'));

    animal.set_species_name(
        replace("arroz", ' ', '-'));

    fp << animal; // by inserting in the file
  } else {
    cout << RESET BACKGROUND_RED FONT_WHITE
        "Erro ao abrir o arquivo: database.txt" RESET
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
        " 0 - Voltar.             " RESET FONT_BLUE
         << endl;

    cout << "\nDigite a funcionalidade desejada: ";
    fflush(stdin);
    cin >> select;

    switch (select) {

    case ALL: {
      system(CLEAR);
      cout << RESET BACKGROUND_GREEN FONT_WHITE " TODOS >> ANIMAIS \n" << endl;

      if (fp.good()) {
        while (!fp.eof()) {
          if (fp.eof())
            return;

          fp >> animal; // extracts from the file
          conversion_strings(animal);
          animal.all_search();
        }
        char back;
        cout << RESET "\n\n" BACKGROUND_GREEN FONT_WHITE
                      " Pressione qualquer tecla para continuar... " RESET;
        cin >> back;
      } else {
        cout << RESET BACKGROUND_RED FONT_WHITE
            "Erro ao abrir o arquivo: database.txt" RESET
             << endl;
      }
      return;
    }
    case MINIMUM: {
      system(CLEAR);
      break;
    }
    case SPECIFY: {
      system(CLEAR);
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