#include "Stack.h"
#include <iostream>
using namespace std;

/**
 * Constructeur par défault qui initialise la stack avec 1 noeud (un entier, nullptr)
 */
Stack::Stack()
{

    m_tete = nullptr;
    cout << "Appel du Constructeur par default d'un objet Stack.\n";
}

/**
 * Un d'tor de l'objet (supprime l'espace des noeuds réservés).
 */
Stack::~Stack()
{
    // on supprime l'espace réservé pour chaqu'un des différents noeuds
    // on récupère le sommet et on supprime en chaine.

    // tant que le noeud du sommet n'est pas null
    while (m_tete != nullptr)
    {
        // on déplie la pile et on récupère l'ancien noeud pour le delete
        Node *NoeudPrecedent = pop();
        cout << "Appel du destructeur d'un objet Stack.\n";

        delete NoeudPrecedent;
    }
}

/**
 * Vérifie si la pile est vide.
 * @return true si le pointeur du sommet est nullptr, false si le sommet pointe vers le noeud suivant.
 */
bool Stack::isEmpty() const
{

    return m_tete == nullptr;
}

/**
 * On ajoute un élément à la pile
 * -> on réserve un espace pour le pointeur du nouveau noeud
 * @param entier un entier qui doit être stocké dans un nouveau noeud
 */
void Stack::push(int entier)
{

    Stack::Node *NouvNoeud = new Stack::Node();

    // on assigne l'entier au noeud
    NouvNoeud->entier = entier;
    // le nouveau noeud pointe vers l'ancienne tête de pile
    NouvNoeud->suivant = m_tete;
    // on place le nouveau noeud en tête de pile
    m_tete = NouvNoeud;
}

/**
 * On déplie la pile pour descendre le sommet d'un cran.
 * @return Node* le pointeur qui contient l'adresse du noeud du sommet de la pile
 */
Stack::Node *Stack::pop()
{
    // on vérifie si la pile n'est pas nulle
    if (isEmpty())
    {
        return nullptr;
    }

    // on récupère le sommet courant
    Node *sommet = m_tete;

    // on remplace le sommet par l'ancien sommet (l'élément juste en dessous du sommet)
    m_tete = m_tete->suivant;

    return sommet;
}
