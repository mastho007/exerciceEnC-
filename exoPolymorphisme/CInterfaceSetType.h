#pragma once



class CInterfaceSetType
{
private:
    /* pas de data c'est juste une interface */
public:
    CInterfaceSetType();
    virtual ~CInterfaceSetType();

    /**
     * Affiche l'objet sur base de la classe dérivée
     */
    virtual void Affiche()const ;

    /**
     * Alloue la place pour un objet du type
     */
    virtual CInterfaceSetType * Allocate();


    /**
     * Retourne le type d'objet de l'objet actuel
     */
    virtual const char* Type() const;

    virtual bool EstEgal(const CInterfaceSetType * oAComparer) const;


};
