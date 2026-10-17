#include "CSetInt.h"
#include <iostream>
using namespace std;

// on initialise la variable statique à 0
int CSetInt::nbreTotObjet = 0;

CSetInt::CSetInt()
{

    // on initialise la taille max d'un tableau par défault à 50.
    m_tailleMax = 50;
    // le nombre d'entier du tableau est de 0 au début.
    m_cardinal = 0;
    // on créé de l'espace pour (taille max) éléments
    m_ptrTab = new int[m_tailleMax];

    cout << "**** appel du constructeur par default.\n";

    nbreTotObjet++;
}

CSetInt::CSetInt(int tailleMax)
{

    // on initialise la taille max d'un tableau par défault à 50.
    m_tailleMax = tailleMax;
    // le nombre d'entier du tableau est de 0 au début.
    m_cardinal = 0;
    // on créé de l'espace pour (taille max) éléments
    m_ptrTab = new int[m_tailleMax];

    cout << "**** appel du constructeur 1 argument.\n";

    nbreTotObjet++;
}

CSetInt::~CSetInt()
{

    // on supprime l'espace mémoire donné au pointeur du tableau contenant les entiers
    delete[] m_ptrTab;
}

int CSetInt::getCardinal() const
{

    return m_cardinal;
}

int CSetInt::getTailleMax() const
{

    return m_tailleMax;
}

bool CSetInt::entierExisteDeja(int entier) const
{
    // si le tableau est vide
    if (getTailleMax() == 0)
    {

        return false;
    }

    for (int i = 0; i < getTailleMax(); i++)
    {

        // si un élément dans le tableau est égal a l'entier recherché
        if (m_ptrTab[i] = entier)
        {

            return true;
        }
    }

    return false;
}

bool CSetInt::atteintCapaciteMax() const
{

    // si la taille du tableau est égal au cardinal -> true
    return (getTailleMax() == getCardinal()) ? true : false;
}

bool CSetInt::ajouterUnEntier(int entier)
{

    // peut être vérif de la validité de l'entier ?

    // si l'entier existe déja ?
    bool entierExistant = entierExisteDeja(entier);

    // si le tableau a atteint sa capacité max
    bool AtteintCapaciteMax = atteintCapaciteMax();

    if (!entierExistant && !AtteintCapaciteMax)
    {

        // on insère l'entier dans la
        m_ptrTab[m_cardinal] = entier;

        m_cardinal++;

        return true;
    }

    return false;
}


int CSetInt::getNbreTotObjet(){

    return nbreTotObjet;
}



