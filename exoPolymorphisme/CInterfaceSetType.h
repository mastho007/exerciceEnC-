#pragma once



class CInterfaceSetType
{
private:
    /* pas de data c'est juste une interface */
public:
    CInterfaceSetType() = default;
    virtual ~CInterfaceSetType() = default;

    /**
     * Affiche l'objet sur base de la classe dérivée
     */
    virtual void Affiche()const = 0;

    /**
     * Alloue la place pour un objet du type
     */
    virtual CInterfaceSetType * Allocate() const = 0;


    /**
     * Retourne le type d'objet de l'objet actuel
     */
    virtual const char* Type() const = 0;

    virtual bool EstEgal(const CInterfaceSetType * oAComparer) const = 0;


};
