#pragma once

class CPoint
{
   
public:
    CPoint(int dAbs, int dOrd);
     int m_dX, m_dY;
    

    void Affiche();
    void Deplace(float fX, float fY);
};
