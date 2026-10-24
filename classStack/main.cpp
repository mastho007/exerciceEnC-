#include "Stack.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    cout << "--- 1. Test initialisation d'un objet. ---\n";
    Stack oStack;

    if (oStack.isEmpty())
    {
        cout << "\t--- La pile a bien ete cree. ---\n";
    }

    cout << "--- 2. Test insertion d'un noeud. ---\n";
    oStack.push(5);
    oStack.push(30);

    if (!oStack.isEmpty())
    {
        cout << "\t--- La pile contient bien le nouveau noeud. ---\n";
    }

    cout << "--- 3. Test de depliage de la pile. ---\n";

    auto noeudPrecedent = oStack.pop();

    if (noeudPrecedent->entier == 30)
    {

        cout << "\t--- La depliement de la pile fonctionne. ---\n";
    }
    delete noeudPrecedent;

    cout << "--- 4. Test de suppression de la pile. ---\n";

    oStack.~Stack();

    if (oStack.isEmpty())
    {

        cout << "\t--- La pile a ete correctement supprimee. ---\n";
    }

    return 0;
}