#include "CPoint.h"
#include <iostream>
#include <cmath>
using namespace std;



CPoint::CPoint() {

	//un point par défault commence à (1, 1, 1)
	m_X = 1;
	m_Y = 1;
	m_Z = 1;
	cout<< "Appel du constructeur par default.\n";
}


CPoint::CPoint(const CPoint &oCPoint) {

	m_X = oCPoint.m_X;
	m_Y = oCPoint.m_Y;
	m_Z = oCPoint.m_Z;
	cout<< "Appel du constructeur par copie.\n";

}

CPoint::~CPoint() {

	cout<< "Appel du destructeur.\n";

}


/**
 * Retourne l'abscisse d'un point
 */
int CPoint::getX() const {

	return m_X;
}

/**
 * Retourne l'ordonnee d'un point
 */
int CPoint::getY() const {

	return m_Y;
}

/**
 * Retourne la coordonnee z d'un point
 */
int CPoint::getZ() const {

	return m_Z;
}


/**
 *
 * Tranforme un point en son opposé (x, y, z) -> (- x, -y, -z)
 *
 */
void CPoint::negate() {

	m_X = -m_X;
	m_Y = -m_Y;
	m_Z = -m_Z;
}

/**
 * Retourne la norme d'un point en 3D
 *
 *
 */
int CPoint::norm() const {

	return sqrt( pow(m_X,2) + pow(m_Y,2)  + pow(m_Z,2) );
}




/**
 * Affiche les infos du point
 */
void CPoint::print() const{
    
printf("Voici les coordonnees du point :\nX : %d\nY : %d\nZ : %d\n", m_X, m_Y, m_Z);
    
    
}










