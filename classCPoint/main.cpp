#include "CPoint.h"
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	cout<< "--- 1. Test de l'instanciation ---"<<endl;
	//on créé l'objet par défault
	CPoint oCPoint;
	//affichage des coordonnée de base
	oCPoint.print();


	cout<< "--- 2. Test de la transformation en son oppose ---"<<endl;
	oCPoint.negate();
	oCPoint.print();

	cout<< "--- 3. Test du calcul de la norme ---"<<endl;
	printf("la norme du point est egale a : %d\n", oCPoint.norm());


	cout<< "--- 4. Test de l'appel du constructeur par copie ---"<<endl;
	CPoint oCPointCopy = oCPoint;


	cout<< "--- 5. Test des appels des destructeurs ---"<<endl;


	return 0;
}


