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
    // on supprime l'espace des éléments du tab de pointeur
    for (int i = 0; i < m_cardinal; i++)
    {
        delete m_tabPtr[i];
    }

    // on supprime l'espace du tableau de pointeur
    delete[] m_tabPtr;
}

CSetType::CSetType(const CSetType &oACopier)
{
    m_tabPtr = new CInterfaceSetType *[oACopier.m_capacite];

    m_cardinal = oACopier.m_cardinal;
    m_capacite = oACopier.m_capacite;
    m_index = oACopier.m_index;

    // on copie via allocate chaque élément pour le nouveau tableau
    for (int i = 0; i < m_cardinal; i++)
    {
        m_tabPtr[i] = oACopier.m_tabPtr[i]->Allocate();
    }
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

           int nouvTaille = (m_cardinal > 0) ? m_cardinal * 2 : 1; 

           CInterfaceSetType** nouvTab = new CInterfaceSetType*[nouvTaille];

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

        cout << "L'objet a bien ete ajoute." << endl;
    }
    else
    {
        cout << "L'objet appartient deja a l'ensemble." << endl;
    }
}

/**
 * Appartient (CInterfaceSetType *) pour tester l’appartenance d’un élément à l’ensemble
 */
bool CSetType::Appartient(const CInterfaceSetType *oAppartient) const
{
    // si le tableau est vide -> false
    if (m_cardinal == 0 || oAppartient == nullptr)
    {
        return false;
    }
    
    bool elementTrouve = false;
    int comparaisonType = 1;
    bool AttEgal = false;

    // on regarde le Type de chaqu'un des objets du tableau et on les compares à l'objet référencé en paramètre
    // on compare les éléments de chaque objet
    for (int i = 0; i < m_cardinal && elementTrouve == false; i++)
    {
        comparaisonType = strcmp(m_tabPtr[i]->Type(), oAppartient->Type());
        AttEgal = m_tabPtr[i]->EstEgal(oAppartient);

        elementTrouve = comparaisonType == 0 && AttEgal == true;
    }

    return elementTrouve;
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
void CSetType::Display(const CInterfaceSetType *oAafficher) const
{
    // si on souhaite afficher un objet selon son type
    bool toutAfficher = oAafficher == nullptr;

    for (int i = 0; i < m_cardinal; i++)
    {
        if (toutAfficher)
        {
            cout << "L'objet " << i + 1 << " :" << endl;
            m_tabPtr[i]->Affiche();
        }
        else if (strcmp(m_tabPtr[i]->Type(), oAafficher->Type()) == 0)
        {
            cout << "L'objet " << i + 1 << " :" << endl;
            m_tabPtr[i]->Affiche();
        }
    }
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
type dérivé de CInterfaceSetType) -> renvoie nullPtr si l'index n'est pas inférieur au cardinal
 */
CInterfaceSetType *CSetType::Suivant()
{
    if (m_index < m_cardinal)
    {
        CInterfaceSetType *ptrElement = m_tabPtr[m_index];
        m_index++;
        return ptrElement;
    }

    return nullptr;
}

/**
 * pour préciser s’il existe encore un élément non examiné.
 */
bool CSetType::Existe() const
{
    return m_index < m_cardinal;
}
