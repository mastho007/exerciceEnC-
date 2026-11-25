#include "CInterfaceSetType.h"

class CComplex : public CInterfaceSetType
{
private:
    float m_lfReel, m_lfImag;

public:
    CComplex(float r = 0, float i = 0);

    ~CComplex();

    CComplex operator=(CComplex);
    CComplex operator+(CComplex);

    /**
     * Affiche l'objet sur base de la classe dérivée
     */
    virtual void Affiche() const;

    /**
     * Alloue la place pour un objet du type
     */
    virtual CInterfaceSetType *Allocate();

    /**
     * Retourne le type d'objet de l'objet actuel
     */
    virtual const char *Type() const;



    virtual bool EstEgal(const CInterfaceSetType * oAComparer) const;



};