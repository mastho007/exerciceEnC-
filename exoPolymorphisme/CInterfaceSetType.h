#pragma once



class CInterfaceSetType
{
private:
    /* data */
public:
    CInterfaceSetType(/* args */);
    ~CInterfaceSetType();

    /**
     * Affiche l'objet sur base de la classe dérivée
     */
    virtual void Affiche()const ;

    /**
     * 
     */
    virtual void Allocate();

};
