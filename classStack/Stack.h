

class Stack
{

private:
    // un structure qui contient pour chaque élément de la pile
    //   -> un entier
    //   -> le ptr qui contient l'adresse du noeud suivant de la pile (au dépard null)
    struct Node
    {
        int entier;
        Node *suivant;
    };

    // le ptr qui contient l'adresse du noeud de la tête de la pile
    Node *m_tete;


public:
/**
 * Constructeur par défault qui initialise la stack avec 1 noeud (un entier, nullptr)
 */
Stack();

/**
 * Un d'tor de l'objet (supprime l'espace des noeuds réservés).
 */
~Stack();

/**
 * Vérifie si la pile est vide.
 * @return true si le pointeur du sommet est nullptr, false si le sommet pointe vers le noeud suivant.
 */
bool isEmpty() const;

/**
 * On ajoute un élément à la pile
 * -> on réserve un espace pour le pointeur du nouveau noeud
 * @param entier un entier qui doit être stocké dans un nouveau noeud
 */
void push(int entier);

/**
 * On supprime l'élément au sommet de la pile
 * @return Node* le pointeur qui contient l'adresse du noeud du sommet de la pile, nullptr si la pile est nulle.
 */
Node* pop();






};