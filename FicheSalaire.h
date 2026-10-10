

class FicheSalaire
{
private:
    int m_cout_salaire_horaire;
    int m_nbre_heure_prestee;

public:
    /**
     * Initialise le salaire horaire par défault en mettant à jour :
     * - le cout de salaire horaire au barème
     */
    void initialisation_salaire_horaire(int salaire_horaire);

    /**
     * Initialise le nombre d'heure prestée à zéro.
     */
    void initialisation_heure_prestee(int nbre_heure_prestee);

    /**
     * Getter qui récupère le salaire horaire de l'objet
     */
    int get_cout_salaire_horaire() const;

    /**
     * Getter qui récupère le nombre d'heure prestee de l'objet
     */
    int get_nbre_heure_prestee() const;

    /**
     * Calcule le salaire sur base de la formule :
     * salaire = nbre_heure_prestee * cout_salaire_horaire
     * @return un entier qui représente le salaire calculé
     */
    int calcul_salaire() const;

    /**
     * Affiche la fiche salariale sur base des infos de l'objet courant
     */
    void afficherFicheSalaire() const;
};

/**
 * On affiche la fiche salariale sur base des infos de l'objet en paramètre
 * @param oFicheSalaire contient l'adresse de l'objet dont on souhaite afficher sa fiche.
 */
void afficherFicheSalaire(const FicheSalaire &oFicheSalaire);
