#include "CPoint.h"
#include "CPointCol.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // on créé l'objet
    CPoint oCPoint(5, 4);

    CPointCol oCPointCol(2, 3, 5);

    cout << "--- 1. Test de la redefinition de la fonction affichage --- " << endl;
    cout << "la fonction affiche dans CPoint : " << endl;
    oCPoint.Affiche();
    cout << "la fonction affiche dans CPointCol : " << endl;
    oCPointCol.Affiche();

    return 0;
}
