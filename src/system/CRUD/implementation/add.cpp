#include "../crud.hpp"

void CRUD::add(ostream &fp) {

  if (!fp.good()) {
    cout << RESET BACKGROUND_RED FONT_WHITE
        "Erro ao abrir o arquivo: database.txt" RESET
         << endl;

  } else {
    Animal animal(&replace);
    cout << endl;

    if (animal.get_active())
      fp << animal; // by inserting in the file
  }
}