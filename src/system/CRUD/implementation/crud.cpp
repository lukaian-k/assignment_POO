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