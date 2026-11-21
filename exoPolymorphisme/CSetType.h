#include "CInterfaceSetType.h"

class CSetType : public CInterfaceSetType
{
private:
    CInterfaceSetType* m_tabPtr;
    int m_cardinal;
public:
    CSetType();
    ~CSetType();

    /**
     * On copie les éléments dans le nouveau tableau
     */
    CSetType(const CSetType& oACopier);


    /**
     * pour ajouter un nouvel élément à l’ensemble (elle devra s’assurer qu’il n’existe pas déjà)
     */
    void Ajoute(CInterfaceSetType * oAajouter);

    /**
     * pour tester l’appartenance d’un élément à l’ensemble
     */
    bool Appartient(CInterfaceSetType * oAppartient);

    /**
     *  qui fournira le nombre d’éléments de l’ensemble
     */
    int Cardinal() const;

    /**
     *
     *  qui affiche le contenu de l’objet
     * @param le type de l'objet dont on veut connaitre tt les infos
     */
    void Display(CInterfaceSetType *oAafficher);

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
