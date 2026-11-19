#include "CComplex.h"



CComplex::CComplex (float r, float i)
	{
		m_lfReel = r;
		m_lfImag = i;
	}

CComplex CComplex::operator = (CComplex oCplx)
{
	m_lfReel = oCplx.m_lfReel;
	m_lfImag = oCplx.m_lfImag;

	return *this;
}



CComplex CComplex::operator + (CComplex Ocplx)
{
	CComplex oTemp;
	oTemp.m_lfReel = m_lfReel + Ocplx.m_lfReel;
	oTemp.m_lfImag = m_lfImag + Ocplx.m_lfImag;
	return oTemp;
}










