#include "CSetType.h"
#include <cstring>
#include <iostream>
using namespace std;

CSetType::CSetType()
{

    // le tableau contient initialement aucun élément
    m_tabPtr = nullptr;
    m_cardinal = 0;
    m_capacite = 0;
    m_index = 0;
}

CSetType::~CSetType()
{
    // on supprime l'espace du tableau de pointeur
    delete[] m_tabPtr;
}

CSetType::CSetType(const CSetType &oACopier)
{
    m_tabPtr = oACopier.m_tabPtr;
    m_cardinal = oACopier.m_cardinal;
    m_capacite = oACopier.m_capacite;
    m_index = oACopier.m_index;
}

/**
 * pour ajouter un nouvel élément à l’ensemble (elle devra s’assurer qu’il n’existe pas déjà)
 */
void CSetType::Ajoute(CInterfaceSetType *oAajouter)
{
    // on part du principe que oAjouter n'est pas null

    if (!Appartient(oAajouter))
    {
        // on a besoin d'agrandir le tableau de pointeurs ?
        if (m_cardinal == m_capacite)
        {

            CInterfaceSetType **nouvTab = new CInterfaceSetType *[1];

            if (m_cardinal > 0)
            {

                nouvTab = new CInterfaceSetType *[m_cardinal * 2];
            }

            // on recopie les anciens pointeurs du tab précédent
            for (int i = 0; i < m_cardinal; i++)
            {
                nouvTab[i] = m_tabPtr[i];
            }
            // on libère l'espace de l'ancien tableau
            delete[] m_tabPtr;

            m_tabPtr = nouvTab;
            m_capacite = (m_cardinal > 0) ? m_cardinal * 2 : 1;
        }
        // on fabrique la copie de l'objet à ajouter
        CInterfaceSetType *oCopie = oAajouter->Allocate();
        m_tabPtr[m_cardinal] = oCopie;
        m_cardinal++;

        cout << "L'objet a bien ete ajoute."<<endl;
    }else{
        cout << "L'objet appartient deja a l'ensemble."<<endl;
    }
}

/**
 * Appartient (CInterfaceSetType *) pour tester l’appartenance d’un élément à l’ensemble
 */
bool CSetType::Appartient(CInterfaceSetType *oAppartient)const
{
    // si le tableau est vide -> false
    if (m_cardinal == 0)
    {
        return false;
    }
    int i = 0;
    int comparaison = 1;

    // on regarde le Type de chaqu'un des objets du tableau et on les compares à l'objet référencé en paramètre
    for (; i < m_cardinal && comparaison != 0; i++)
    {
        comparaison = strcmp(m_tabPtr[i]->Type(), oAppartient->Type());
    }

    return comparaison == 0;
}

/**
 *  qui fournira le nombre d’éléments de l’ensemble
 */
int CSetType::Cardinal() const
{
    return m_cardinal;
}

/**
 *
 *  qui affiche le contenu de l’objet
 * @param le type de l'objet dont on veut connaitre tt les infos
 */
void CSetType::Display(CInterfaceSetType *oAafficher)
{
}

/**
 * pour initialiser le mécanisme d’itération.
 */
void CSetType::Init()
{
    m_index = 0;
}

/**
 *  qui fournira en retour le prochain élément (objet d’un
type dérivé de CInterfaceSetType)
 */
CInterfaceSetType *CSetType::Suivant()
{
    CInterfaceSetType* ptrElement = m_tabPtr[m_index];
    m_index++;
    return ptrElement;
}

/**
 * pour préciser s’il existe encore un élément non examiné.
 */
bool CSetType::Existe()
{
    return m_index < m_cardinal;
}
