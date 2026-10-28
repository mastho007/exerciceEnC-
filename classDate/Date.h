

class Date
{
private:
    // une date contient le jour, le mois et l'année
    int m_jour;
    int m_mois;
    int m_annee;

public:
    // c'tor par default
    Date();

    // c'tor par copie
    Date(const Date &oDate);

    // d'tor
    ~Date();

    // les getters
    int getJour() const;

    int getMois() const;

    int getAnnee() const;

    // reset une date donnée ex : 05/06/2001 -> 01/01/2000
    void reset(int jour, int mois, int annee);

    // avance une date de xJour/xMois/xAnnee ex: 05/06/2001 -> advance(5, 1, 2) -> 10/07/2003
    void advance(int Nbjour, int NbMois, int NbAnnee);

    // affiche la date
    void print();

    /**
     * Retourne 31 ou 30 et 28 ou 29 pour février et -1 si le mois n'est pas bon
     */
    int jourDansMois(int mois, int annee) const;

    /**
     * Vérifie que la date :
     * - jour : le nb de jour en fonction du mois
     * - mois : compris entre 1 et 12
     * - annee :
     */
    bool dateCorrecte(int jour, int mois, int annee) const;

    // détermine si l'année est bissextile
    bool anneeBissextile(int annee) const ;
};
