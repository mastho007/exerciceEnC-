#include "CSetInt.h"
#include <iostream>
using namespace std;
using enum CSetInt::Etat;

// on initialise la variable statique à 0
int CSetInt::nbreTotObjet = 0;

CSetInt::CSetInt()
{

	// on initialise la taille max d'un tableau par défault à 50.
	m_tailleMax = 50;
	// le nombre d'entier du tableau est de 0 au début.
	m_cardinal = 0;
	// on créé de l'espace pour (taille max) éléments
	m_ptrTab = new int[m_tailleMax];

	cout << "**** appel du constructeur par default.\n";

	nbreTotObjet++;
}

CSetInt::CSetInt(int tailleMax)
{

	// on initialise la taille max d'un tableau par défault à 50.
	m_tailleMax = tailleMax;
	// le nombre d'entier du tableau est de 0 au début.
	m_cardinal = 0;
	// on créé de l'espace pour (taille max) éléments
	m_ptrTab = new int[m_tailleMax];

	cout << "**** appel du constructeur 1 argument.\n";

	nbreTotObjet++;
}

CSetInt::~CSetInt()
{

    cout<<"Destruction de l'objet.\n";
    //on désincrémente le compteur d'objet lors de sa suppression
    nbreTotObjet--;
    
	// on supprime l'espace mémoire donné au pointeur du tableau contenant les entiers
	delete[] m_ptrTab;
}


CSetInt::CSetInt(const CSetInt &oCSetInt){
    
    //on place les données membre dans l'objet en paramètre 
    m_cardinal = oCSetInt.m_cardinal;
    
    m_tailleMax = oCSetInt.m_tailleMax;
    
    //on créé un nouvel espace pour la mémoire dynamique
    m_ptrTab = new int[m_tailleMax];
    
    //on copie dans le nouveau tableau les valeurs du tableau précédent 
    for(int i = 0; i< m_cardinal; i++){
        
        m_ptrTab[i] = oCSetInt.m_ptrTab[i];
    }
    
    //on incrémente le nombre d'objet
    nbreTotObjet++;
    
    cout<< "Appel du constructeur par copie.\n";
}




int CSetInt::getCardinal() const
{

	return m_cardinal;
}

int CSetInt::getTailleMax() const
{

	return m_tailleMax;
}



bool CSetInt::entierExisteDeja(int entier) const
{
	// si le tableau est vide
	if (getTailleMax() == 0)
	{

		return false;
	}

	for (int i = 0; i < m_cardinal; i++)
	{

		// si un élément dans le tableau est égal a l'entier recherché
		if (m_ptrTab[i] == entier)
		{

			return true;
		}
	}

	return false;
}

bool CSetInt::atteintCapaciteMax() const
{

	// si la taille du tableau est égal au cardinal -> true
	return (getTailleMax() == getCardinal()) ? true : false;
}

CSetInt::Etat CSetInt::ajouterUnEntier(int entier)
{

	// peut être vérif de la validité de l'entier ?

	// si l'entier existe déja ?
    if(entierExisteDeja(entier)){
        
        return Etat::EXISTANT;
    }

	// si le tableau a atteint sa capacité max
	if(atteintCapaciteMax()){
        
        return Etat::COMPLET;
    }


		// on insère l'entier dans la
		m_ptrTab[m_cardinal] = entier;

		m_cardinal++;

        return VALIDE;	

}


int CSetInt::getNbreTotObjet() {

	return nbreTotObjet;
}