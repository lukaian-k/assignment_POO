#include "../crud.hpp"

string replace(string word, char before, char after) {

  for (int i = 0; i <= word.length(); i++) {
    if (word[i] == before) {
      word[i] = after;
    }
  }

  return word;
}

void CRUD::_proceed() {

  cout << RESET "\n\n" BACKGROUND_GREEN FONT_WHITE
                " Pressione a tecla ENTER para continuar... " RESET;

  cin.ignore();
  cin.get();
}

int CRUD::size() {

  ifstream fp("database.txt");

  if (!fp.good()) {
    cout << RESET BACKGROUND_RED FONT_WHITE
        "Erro ao abrir o arquivo: database.txt" RESET
         << endl;

    return 417;
  }

  Animal animal;
  int i = 0;

  while (!fp.eof()) {

    fp >> animal;

    if (animal.get_active())
      i++;
  }

  return i - 1;
}

int CRUD::size(string name) {

  ifstream fp("database.txt");

  if (!fp.good()) {
    cout << RESET BACKGROUND_RED FONT_WHITE
        "Erro ao abrir o arquivo: database.txt" RESET
         << endl;

    return 417;
  }

  Animal animal;
  int i = 0;

  while (!fp.eof()) {

    fp >> animal;

    if (!animal.get_active())
      continue;

    i++;

    name = replace(name, ' ', '-');

    if (name == animal.get_name())
      return i;
  }

  return 404;
}