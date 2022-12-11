#include "../crud.hpp"

void CRUD::remove(fstream &fp) {
  system(CLEAR);
  cout << RESET BOLD BACKGROUND_RED FONT_WHITE " DELETAR >> ANIMAL \n" << endl;

  if (!fp.good()) {
    cout << RESET BACKGROUND_RED FONT_WHITE
        "Erro ao abrir o arquivo: database.txt" RESET
         << endl;
  } else {
    cout << RESET BOLD FONT_BLUE << "Qual animal deseja buscar? " << RESET;

    string name = _search<string>();
    Animal animal;

    while (!fp.eof()) {

      auto pos = fp.tellg();
      fp >> animal; // extracts from the file

      if (animal.specify_search(name)) {

        cout << RESET BOLD FONT_RED "\nDeseja deletar? " FONT_GREEN
                                    "(1: SIM | 0: NÃO) " RESET;

        animal.set_active();
        fflush(stdin);

        int answer;
        cin >> answer;

        if (answer != 1) {
          cout << RESET BACKGROUND_RED FONT_WHITE
              "\n\n OPERAÇÃO CANCELADA! \n" RESET
               << endl;

          break;
        }

        fp.seekp(pos);
        fp << animal;

        cout << RESET BACKGROUND_GREEN FONT_WHITE
            "\n\n A OPERAÇÃO FOI CONCLUIDA COM ÊXITO! \n" RESET
             << endl;

        break;
      }

      if (fp.eof()) {
        cout << RESET "\n" BACKGROUND_WHITE FONT_GREEN " Nenhum animal: ("
             << name << ") foi encontrado! " RESET << endl;
      }
    }

    _proceed();
  }
}