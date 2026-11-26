#include "CInterfaceSetType.h"

class CPoint : public CInterfaceSetType
{

private:
    // pour chaque point on a besoin de connaitre x, y, z
    int m_X;
    int m_Y;
    int m_Z;

public:
    // un c'tor par défault
    CPoint();

    // un c'tor 3 paramètres
    CPoint(int x, int y, int z);

    // un c'tor par copie
    CPoint(const CPoint &oCPoint);

    // un d'tor
    ~CPoint();

    /**
     * Retourne l'abscisse d'un point
     */
    int getX() const;

    /**
     * Retourne l'ordonnee d'un point
     */
    int getY() const;

    /**
     * Retourne la coordonnee z d'un point
     */
    int getZ() const;

    /**
     *
     * Tranforme un point en son opposé (x, y, z) -> (- x, -y, -z)
     *
     */
    void negate();

    /**
     * Retourne la norme d'un point en 3D
     *
     *
     */
    int norm() const;

    /**
     * Affiche les infos du point
     */
    void print() const;

    /**
     * Affiche l'objet sur base de la classe dérivée
     */
    virtual void Affiche() const;

    /**
     * Alloue la place pour un objet du type
     */
    virtual CInterfaceSetType *Allocate() const;

    /**
     * Retourne le type d'objet de l'objet actuel
     */
    virtual const char *Type() const;

    
    virtual bool EstEgal(const CInterfaceSetType * oAComparer) const;

};
