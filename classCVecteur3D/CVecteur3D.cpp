#include "CVecteur3D.h"
#include <iostream>
using namespace std;



//-------------------------------------------
// Implémentation des c'tor et le d'tor
//-------------------------------------------
CVecteur3D::CVecteur3D(float fC1, float fC2, float fC3)
{
	cout << "Appel du c'tor 3 parametres surcharge." << endl;
	m_fX = fC1;
	m_fY = fC2;
	m_fZ = fC3;
}

CVecteur3D::CVecteur3D(const CVecteur3D &oVecteur)
{

	cout << "Appel du c'tor par copie." << endl;
	m_fX = oVecteur.m_fX;
	m_fY = oVecteur.m_fY;
	m_fZ = oVecteur.m_fZ;
}

CVecteur3D::~CVecteur3D()
{

	cout << "Appel du d'tor." << endl;
}




//-------------------------------------------
// Implémentation des surcharges d'opérateurs
//-------------------------------------------
bool CVecteur3D::operator==(const CVecteur3D &oVecteur) const
{

	return (m_fX == oVecteur.m_fX) && (m_fY == oVecteur.m_fY) && (m_fZ == oVecteur.m_fZ);
}

bool CVecteur3D::operator!=(const CVecteur3D &oVecteur) const
{

	return (m_fX != oVecteur.m_fX) || (m_fY != oVecteur.m_fY) || (m_fZ != oVecteur.m_fZ);
}



CVecteur3D operator+(const CVecteur3D &oVecteur1, const CVecteur3D &oVecteur2)
{

	CVecteur3D temp;

	temp.m_fX = oVecteur1.m_fX + oVecteur2.m_fX;
	temp.m_fY = oVecteur1.m_fY + oVecteur2.m_fY;
	temp.m_fZ = oVecteur1.m_fZ + oVecteur2.m_fZ;

	return temp;
}

float operator*(const CVecteur3D &oVecteur1, const CVecteur3D &oVecteur2)
{

	return (oVecteur1.m_fX * oVecteur2.m_fX) + (oVecteur1.m_fY * oVecteur2.m_fY) + (oVecteur1.m_fZ * oVecteur2.m_fZ);
}



//---------------------------
// Implémentation des getters
//---------------------------

float CVecteur3D::getX() { return m_fX; }

float CVecteur3D::getY() { return m_fY; }

float CVecteur3D::getZ() { return m_fZ; }
