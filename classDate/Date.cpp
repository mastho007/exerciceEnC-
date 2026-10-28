#include "Date.h"
#include <iostream>
#include <stdio.h>
using namespace std;

// c'tor par default
Date::Date()
{
    cout << "\tAppel du c'tor par default.\n";

    m_jour = 1;
    m_mois = 1;
    m_annee = 2000;
}

// c'tor par copie
Date::Date(const Date &oDate)
{
cout << "\tAppel du c'tor par copie.\n";
    m_jour = oDate.m_jour;
    m_mois = oDate.m_mois;
    m_annee = oDate.m_annee;
}

// d'tor
Date::~Date()
{
    cout << "\tAppel du d'tor.\n";
}

// les getters
int Date::getJour() const
{

    return m_jour;
}

int Date::getMois() const
{

    return m_mois;
}

int Date::getAnnee() const
{

    return m_annee;
}

// reset une date donnée ex : 05/06/2001 -> 01/01/2000
void Date::reset(int jour, int mois, int annee)
{
    if (dateCorrecte(jour, mois, annee))
    {
        m_jour = jour;
        m_mois = mois;
        m_annee = annee;
    }
}

// avance une date de xJour/xMois/xAnnee ex: 05/06/2001 -> advance(5, 1, 2) -> 10/07/2003
void Date::advance(int Nbjour, int NbMois, int NbAnnee)
{
    m_annee += NbAnnee;

    // on reste entre 1 et 12 mois
    m_mois += NbMois;

    if (m_mois > 12)
    {

        int anneeEnPlus = m_mois / 12;
        m_annee += anneeEnPlus;

        m_mois = (m_mois - 1) % 12 + 1;
    }

    m_jour += Nbjour;

    while (m_jour > jourDansMois(m_mois, m_annee))
    {
        // on soustrait le nb de jour du mois en incrémentant le nbre de mois
        m_jour -= jourDansMois(m_mois, m_annee);

        m_mois++;

        if (m_mois > 12)
        {
            m_annee++;
            m_mois = 1;
        }
    }
}

// affiche la date
void Date::print()
{
    printf("La date de l'objet : %02d/%02d/%04d\n", m_jour, m_mois, m_annee);
}

int Date::jourDansMois(int mois, int annee) const
{
    switch (mois)
    {
    case 1:
        return 31;
    case 3:
        return 31;
    case 5:
        return 31;
    case 7:
        return 31;
    case 8:
        return 31;
    case 10:
        return 31;
    case 12:
        return 31;
    case 4:
        return 30;
    case 6:
        return 30;
    case 9:
        return 30;
    case 11:
        return 30;

    case 2:

        return (anneeBissextile(annee)) ? 29 : 28;

    default:
        return -1;
        break;
    }
}

/**
 * Vérifie que la date :
 * - jour : le nb de jour en fonction du mois
 * - mois : compris entre 1 et 12
 * - annee :
 */
bool Date::dateCorrecte(int jour, int mois, int annee) const
{
    if (mois < 1 || mois > 12)
    {
        return false;
    }

    int nbJour = jourDansMois(mois, annee);

    return jour <= nbJour && jour > 0;
}

// détermine si l'année est bissextile
bool Date::anneeBissextile(int annee) const
{

    // si divisible par 4 mais pas par 100 ou si divisible par 400
    return (annee % 4 == 0 && annee % 100 != 0) || annee % 400 == 0;
}
