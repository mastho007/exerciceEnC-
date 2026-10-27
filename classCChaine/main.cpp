#include "CChaine.h"
#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
   
        cout << "--- 1. Test du constructeur par default---.\n";

        CChaine oCChaine;


        cout << "--- 2. Test du constructeur 1 parametre---.\n";
    
        CChaine oCChaine1("Nouvel objet cree!");

        cout << "--- 3. Test du constructeur par copie---.\n";

        CChaine oCChaineCopy = oCChaine1;

        cout << "--- 4. Test du destructeur---.\n";

    return 0;
}









