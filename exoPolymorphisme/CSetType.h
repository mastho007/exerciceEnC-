#include "CInterfaceSetType.h"

class CSetType : public CInterfaceSetType
{
private:
    /* data */
public:
    CSetType(/* args */);
    ~CSetType();

    /**
     * pour ajouter un nouvel élément à l’ensemble (elle devra s’assurer qu’il n’existe pas déjà)
     */
    void Ajoute(CInterfaceSetType *);

    /**
     * Appartient (CInterfaceSetType *) pour tester l’appartenance d’un élément à l’ensemble
     */
    bool Appartient(CInterfaceSetType *);

    /**
     *  qui fournira le nombre d’éléments de l’ensemble
     */
    int Cardinal() const;

    /**
     *
     *  qui affiche le contenu de l’objet
     * @param le type de l'objet dont on veut connaitre tt les infos 
     */
    void Display(CInterfaceSetType* oAafficher);

    /**
     * retrouver le type de l’objet passé en paramètre dans display()
     */
    CInterfaceSetType* Type();



    
    /**
     * pour initialiser le mécanisme d’itération.
     */
    void Init();

    /**
     *  qui fournira en retour le prochain élément (objet d’un
type dérivé de CInterfaceSetType)
     */
    CInterfaceSetType *Suivant();

    
    /**
     * pour préciser s’il existe encore un élément non examiné.
     */
    bool Existe();


};
