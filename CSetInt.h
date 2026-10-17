

class CSetInt
{
private:
    // un pointeur qui contient l'adresse du tableau d'entier
    int *m_ptrTab;
    // la taille max de nombre que peux contenir l'ensemble
    int m_tailleMax;
    // le nombre d'entier que contient l'ensemble
    int m_cardinal;

public:
    // on déclare une variable de classe qui renseigne sur le nombre d'objet créé de cette classe
    static int nbreTotObjet;

    // on déclare le constructeur par défault ou un constructeur en fonction de la taille du tableau de l'ensemble
    CSetInt();
    CSetInt(int tailleMax);


    ~CSetInt();

    /**
     * Récupère le nombre d'entier que contient le tableau 
     */
    int getCardinal()const ;

    /**
     * Récupère la taille maximale du tableau d'entier
     */
    int getTailleMax() const;

    /**
     * Vérifie si l'entier existe déja dans l'ensemble d'entier contenu dans le tableau
     * @param entierAajouter l'entier dont on veut savoir si il est contenus dans le tableau
     * @return true si le nombre existe déja dans le tableau, false sinon.
     */
    bool entierExisteDeja(int entierAajouter) const;

    /**
     * Vérifie si le nombre d'éléments dans le tableau n'est pas égal ou supérieur à la taille max du tableau
     * @return true si la taille max est atteinte, false si il reste de la place.
     */
    bool atteintCapaciteMax() const;

    /**
     * Ajoute un entier au tableau d'entier si les 2 conditions on été vérifiées précédemment(nouvel entier et il reste de la place dans le tableau)
     * @param entier l'entier à ajouter 
     * @return true 
     */
    bool ajouterUnEntier(int entier);


    /**
     * Récupère le nombre d'objet créé par cette classe via la variable de classe nbreTotObjet
     */
    static int getNbreTotObjet();

};
