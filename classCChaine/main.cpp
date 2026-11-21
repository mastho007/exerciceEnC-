#include "CChaine.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    cout << "--- 1. Test du constructeur par default---.\n";

    CChaine oCChaineVide;

    cout << "--- 2. Test du constructeur 1 parametre---.\n";

    CChaine oCChaine1("Nouvel objet cree!");

    cout << "--- 3. Test du constructeur par copie---.\n";

    CChaine oCChaineCopy = oCChaine1;

    cout << "--- 4. Test du destructeur---.\n";



    cout << "--- 5. Test des opérateurs de conversion---. \n";

    cout << "   --- 5.1 operateurs de conversion const char*---. \n";

    cout << "  " << (const char *)oCChaine1 << endl;

    cout << "   --- 5.2 operateurs de conversion bool---. \n";

    // on teste si la chaine est remplie
    if (oCChaine1)
    {
        cout << "  " << "La conversion a marchee" << endl;
    }
    else
    {
        cout << "  " << "probleme de conversion" << endl;
        
    }

    if(!oCChaineVide){
        cout << "  " << "La chaine est bien vide" << endl;
    }
    else
    {
        cout << "  " << "probleme de conversion" << endl;
        
    }



    int taille_chaine = (int)oCChaine1;
    cout << "   --- 5.3 operateurs de conversion int---. \n";

    cout << "  " << "La chaine fait " << taille_chaine << " caracteres."<< endl;






    return 0;
}
