#include "Date.h"
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{

    cout << "--- 1. Initialisation d'un objet Date. ---\n";

    Date oDate;
    oDate.print();

    cout << "--- 2. Initialisation d'un objet Date par copie. ---\n";
    Date oDateCopie = oDate;
    oDateCopie.print();

    cout << "--- 3. Test des getters. ---\n";
    oDate.print();
    printf("Le jour est : %02d\nLe mois est : %02d\nLannee est : %02d\n", oDate.getJour(), oDate.getMois(), oDate.getAnnee());

    cout << "--- 4. Test de reset(). ---\n";

    oDate.reset(5, 6, 2001);
    oDate.print();

    cout << "--- 5. Test de reset() invalide -> garde l'ancienne Date. ---\n";
    oDate.reset(31, 2, 2024);
    oDate.print();

    cout << "--- 6. Test d'avancement de la Date. ---\n";

    cout << "\t--- Test d'avancement du jour---\n";
    oDate.advance(5, 0, 0);
    oDate.print();

    cout << "\t--- Test d'avancement du mois---\n";
    oDate.advance(0, 5, 0);
    oDate.print();

    cout << "--- 6. Test d'avancement de la Date en gd nombre de jours. ---\n";
    oDate.advance(50, 0, 0);
    oDate.print();


    return 0;
}
