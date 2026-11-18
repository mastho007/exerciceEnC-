#include "CPointCol.h"
#include "CPoint.h"
#include <iostream>
using namespace std;


    CPointCol::CPointCol(int x, int y, int couleur): CPoint(x, y), m_couleur(couleur)
    {
        cout<< "Appel du c'tor CPointCol" << endl;
    }

    CPointCol::~CPointCol(){

    }

    void CPointCol::Affiche (){
        
        cout << "Coordonnees : " << m_dX << " " << m_dY << endl;
        cout << "Couleur : " << m_couleur << endl;
    }

    void CPointCol::Colore(int couleur){

        m_couleur = couleur;
    }   





