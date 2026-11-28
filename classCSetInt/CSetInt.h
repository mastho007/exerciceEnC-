

class CSetInt
{

    //---------------------------------------------------------
    // un pointeur qui contient l'adresse du tableau d'entier
    // la taille max de nombre que peux contenir l'ensemble
    // le nombre d'entier que contient l'ensemble
    //---------------------------------------------------------
private:
    int *m_ptrTab;
    int m_tailleMax;
    int m_cardinal;

public:
    //----------------------------------------------------------------------------------------------
    // l'enum peut prendre ces valeurs :
    // Soit :  EXISTANT   -> l'entier existe deja dans le tableau
    //         COMPLET    -> le tableau a atteint sa taille max
    //         VALIDE     -> l'entier a  bien été ajouté au tableau
    //
    //----------------------------------------------------------------------------------------------
    static int nbreTotObjet;
    enum Etat
    {
        EXISTANT,
        COMPLET,
        VALIDE
    };

    //--------------------------------------
    // Declaration des c'tor et d'tor
    //--------------------------------------
    CSetInt();
    CSetInt(int tailleMax);
    CSetInt(const CSetInt &oCSetInt);
    ~CSetInt();

    //--------------------------------------
    // Getters
    //--------------------------------------
    int getCardinal() const;

    int getTailleMax() const;

    static int getNbreTotObjet();


    
    // Vérifie si l'entier existe déja dans l'ensemble d'entier contenu dans le tableau
    bool entierExisteDeja(int entierAajouter) const;

    // Vérifie si le nombre d'éléments dans le tableau n'est pas égal ou supérieur à la taille max du tableau
    bool atteintCapaciteMax() const;

    // Ajoute un entier au tableau d'entier si les 2 conditions on été vérifiées précédemment(nouvel entier et il reste de la place dans le tableau)
    Etat ajouterUnEntier(int entier);


    //------------------------------------------------
    // Opérateurs de conversion
    //------------------------------------------------
    operator int() const;

    operator bool() const;

    //------------------------------------------------
    // Surcharge pour les opérateurs < et []
    //------------------------------------------------
    CSetInt &operator<(int entierAajouter);

    int operator[](int dValeur) const;

};
