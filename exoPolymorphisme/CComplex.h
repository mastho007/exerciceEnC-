#include "CInterfaceSetType.h"

class CComplex : public CInterfaceSetType
{
private:
	float m_lfReel, m_lfImag;

public:
	CComplex(float r = 0, float i = 0);

	CComplex operator=(CComplex);
	CComplex operator+(CComplex);

	
	virtual void Affiche() const;
};