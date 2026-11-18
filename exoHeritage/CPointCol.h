#pragma once
#include "CPoint.h"

class CPointCol : public CPoint
{
private:
    int m_couleur;
public:
    CPointCol(int x, int y, int couleur);

    ~CPointCol();

    void Affiche ();

    void Colore(int couleur);

};

