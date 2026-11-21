#include "CChaine.h"
#include <cstring>
#include <iostream>
using namespace std;

// constructeur par défault -> on cree un espace pour juste un char '\0'
CChaine::CChaine()
{
    cout << "Appel du constructeur par default.\n";

    // on crée un espace pour le charactere
    m_chaine = new char[1];

    // on insère le char dans la variable
    *m_chaine = '\0';
}

// le constructeur si on fournit une chaine de char ex: "bonjour"
CChaine::CChaine(const char *tabChar)
{
    cout << "Appel du constructeur 1 parametre.\n";
    int taille = strlen(tabChar);

    // on alloue le tableau nécessaire pour notre tableau
    m_chaine = new char[taille + 1];

    strcpy(m_chaine, tabChar);
}

// le constructeur par copie
CChaine::CChaine(const CChaine &oCChaine)
{
    cout << "Appel du constructeur par copie.\n";

    // on calcule la taille de la chaine de l'objet
    int taille = strlen(oCChaine.m_chaine);

    // on alloue l'espace mémoire
    m_chaine = new char[taille + 1];

    strcpy(m_chaine, oCChaine.m_chaine);
}

// destructeur de chaine
CChaine::~CChaine()
{
    cout << "Appel du destructeur.\n";

    // on supprime l'espace alloué pour le tableau de char
    delete[] m_chaine;
}

// la chaine de characteres devient const
CChaine::operator const char *() const
{

    return m_chaine;
}

// si la chaine est non vide (si il n'y a pas '\0' en premiere position)
CChaine::operator bool() const
{

    return strlen(m_chaine) > 0;
}

// conversion en int si on souhaite calculer la longueur de la chaine (sans le '\0')
    CChaine::operator int() const
{

    return strlen(m_chaine);
}
