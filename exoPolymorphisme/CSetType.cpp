#include "CSetType.h"
#include <cstring>

CSetType::CSetType()
{

    // le tableau contient initialement aucun élément
    m_tabPtr = nullptr;
    m_cardinal = 0;
}

CSetType::~CSetType()
{

}


CSetType::CSetType(const CSetType &oACopier)
{

}

/**
 * pour ajouter un nouvel élément à l’ensemble (elle devra s’assurer qu’il n’existe pas déjà)
 */
void CSetType::Ajoute(CInterfaceSetType *oAajouter)
{
    // on regarde si l'élément est déja présent dans le tableau ?
    if(Appartient(oAajouter)){

    }else{
        //création d'une copie de l'objet et on le place dans le tableau 
        CInterfaceSetType* ptrCopie = oAajouter->Allocate();

        if(m_cardinal == 0){

            m_tabPtr = ptrCopie;
            m_cardinal++;

        }else{

            
        }

    }

}

/**
 * Appartient (CInterfaceSetType *) pour tester l’appartenance d’un élément à l’ensemble
 */
bool CSetType::Appartient(CInterfaceSetType *oAppartient)
{
    //si le tableau est vide -> false
    if(m_cardinal == 0){
        return false;
    }
    int i = 0;
    int comparaison = 1;

    //on regarde le Type de chaqu'un des objets du tableau et on les compares à l'objet référencé en paramètre
    for (; i < m_cardinal && comparaison != 0; i++)
    {
        comparaison = strcmp(m_tabPtr[i].Type(), oAppartient->Type());
    }
    
    return comparaison == 0;



}

/**
 *  qui fournira le nombre d’éléments de l’ensemble
 */
int CSetType::Cardinal() const
{
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
}

/**
 *  qui fournira en retour le prochain élément (objet d’un
type dérivé de CInterfaceSetType)
 */
CInterfaceSetType *CSetType::Suivant()
{
}

/**
 * pour préciser s’il existe encore un élément non examiné.
 */
bool CSetType::Existe()
{
}
