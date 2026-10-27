



class Date
{
private:
    //une date contient le jour, le mois et l'année
    int jour;
    int mois;
    int annee;    


public:
    //c'tor par default 
    Date();

    //c'tor par copie
    Date(const Date &oDate);

    //d'tor 
    ~Date();

    //les getters
    int getJour();

    int getMois();

    int getAnnee();

    //reset une date donnée ex : 05/06/2001 -> 01/01/2001
    void reset();

    //avance une date de xJour/xMois/xAnnee ex: 05/06/2001 -> advance(5, 1, 2) -> 10/07/2003
    void advance(int Nbjour, int NbMois, int NbAnnee);

    //affiche la date 
    void print();

    /**
     * Vérifie que la date :
     * - jour : le nb de jour en fonction du mois 
     * - mois : compris entre 1 et 12
     * - annee : 
     */
    bool dateCorrecte();



};

Date::Date(/* args */)
{
}

Date::~Date()
{
}
