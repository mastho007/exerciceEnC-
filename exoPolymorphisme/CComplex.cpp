#include "CComplex.h"
#include <iostream>
using namespace std;

CComplex::CComplex(float r, float i)
{
	m_lfReel = r;
	m_lfImag = i;

	cout << "Appel du c'tor CComplex." << endl;
}

CComplex::~CComplex()
{

	cout << "Appel du d'tor CComplex." << endl;
}

CComplex& CComplex::operator=(const CComplex& oComplex)
{
	m_lfReel = oComplex.m_lfReel;
	m_lfImag = oComplex.m_lfImag;

	return *this;
}

CComplex CComplex::operator+(const CComplex& oComplex)
{
	CComplex oTemp;
	oTemp.m_lfReel = m_lfReel + oComplex.m_lfReel;
	oTemp.m_lfImag = m_lfImag + oComplex.m_lfImag;
	return oTemp;
}

/**
 * Affiche l'objet sur base de la classe dérivée
 */
void CComplex::Affiche() const
{

	cout << "Le nombre complexe contient pour composante : " << endl;
	cout << "\tPartie reele : " << m_lfReel << endl;
	cout << "\tPartie imag  : " << m_lfImag << endl;
}

/**
 * Alloue la place pour un objet du type
 */
CInterfaceSetType *CComplex::Allocate() const
{

	// on créé un nouveau ptr qui contient l'adresse de l'objet CPoint actuel
	CComplex *ptrComplex = new CComplex(m_lfReel, m_lfImag);

	return ptrComplex;
}

/**
 * Retourne le type d'objet de l'objet actuel
 */
const char *CComplex::Type() const
{

	return "CComplex";
}


bool CComplex::EstEgal(const CInterfaceSetType * oAComparer) const{

	if(oAComparer == nullptr){
		return false;
	}

	//on cast de facon dynamique 
	const CComplex* complex = dynamic_cast<const CComplex*>(oAComparer);

	if(complex == nullptr){
		return false;
	}else{
		return m_lfReel == complex->m_lfReel && m_lfImag == complex->m_lfImag;
	}

    }