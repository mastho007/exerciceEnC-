#include <cstdio>
#include <string>
using namespace std;
#include "FicheSalaire.h"

bool FicheSalaire::initialisation_salaire_horaire(int salaire_horaire)
{

    // le salaire_horaire doit être supérieur à zero
    if (salaire_horaire > 0)
    {

        m_cout_salaire_horaire = salaire_horaire;
        return true;
    }
    return false;
}

bool FicheSalaire::initialisation_heure_prestee(int nbre_heure_prestee)
{

    // le nbre d'heure prestee doit etre supérieur ou égal à zero
    if (nbre_heure_prestee >= 0)
    {

        m_nbre_heure_prestee = nbre_heure_prestee;
        return true;
    }
    return false;
}

int FicheSalaire::get_cout_salaire_horaire() const
{

    return m_cout_salaire_horaire;
}

int FicheSalaire::get_nbre_heure_prestee() const
{

    return m_nbre_heure_prestee;
}

int FicheSalaire::calcul_salaire() const
{

    return m_nbre_heure_prestee * m_cout_salaire_horaire;
}

void FicheSalaire::afficherFicheSalaire() const
{

    printf("\t\tVoici votre fiche salariale :\n");
    printf("Cout du salaire horaire = %5deuro/h\n", get_cout_salaire_horaire());
    printf("Nombre d'heures prestees = %4d heures\n", get_nbre_heure_prestee());
    printf("Salaire calcule = %6d euros", calcul_salaire());
}

void afficherFicheSalaire(const FicheSalaire &oFicheSalaire)
{

    printf("\t\tVoici votre fiche salariale :\n");
    printf("Cout du salaire horaire = %5deuro/h\n", oFicheSalaire.get_cout_salaire_horaire());
    printf("Nombre d'heures prestees = %4d heures\n", oFicheSalaire.get_nbre_heure_prestee());
    printf("Salaire calcule = %6d euros", oFicheSalaire.calcul_salaire());
}
