#include "CPoint.h"
#include <iostream>
using namespace std;




 CPoint::CPoint (int dAbs, int dOrd)
 {
 m_dX = dAbs;
 m_dY = dOrd;
 cout << "Appel du c'tor CPoint" << endl;
 }

 void CPoint::Affiche ()
 {
 cout << "Coordonnees : " << m_dX << " " << m_dY << endl;
 }
 
 void CPoint::Deplace (float fX, float fY)
 {
 m_dX += fX;
 m_dY += fY;
 }






