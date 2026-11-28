#include "CVecteur3D.h"
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	cout<< "--- 1. Test de l'operateur == ---"<<endl;

	CVecteur3D oVect1(1.1, 2.2, 3.3);
	CVecteur3D oVect2(1.1, 2.2, 3.3);

	printf("\t Valeur attendue : %s\n", "true");
	printf("\t Valeur obtenue  : %s\n", (oVect1 == oVect2) ? "true" : "false");


	cout<< "--- 2. Test de l'operateur != ---"<<endl;

	CVecteur3D oVect3(2.0, 2.2, 3.3);

	printf("\t Valeur attendue : %s\n", "true");
	printf("\t Valeur obtenue  : %s\n", (oVect1 != oVect3) ? "true" : "false");


	cout<< "--- 3. Test de l'operateur + ---"<<endl;

	CVecteur3D oVectAdd = oVect1 + oVect2;
	printf("\t Coordonnee attendue : \n");
	printf("\t X : %f\n", 2.2);
	printf("\t Y : %f\n", 4.4);
	printf("\t Z : %f\n", 6.6);

	printf("\t Valeur obtenue      : \n");
	printf("\t X : %f\n", oVectAdd.getX());
	printf("\t Y : %f\n", oVectAdd.getY());
	printf("\t Z : %f\n", oVectAdd.getZ());


	cout<< "--- 4. Test de l'operateur * ---"<<endl;

    float prodScalaire = oVect1 * oVect2;
	printf("\t Produit scalaire attendu : %f\n", 16.94);

	printf("\t Produit scalaire obtenu  : %f\n", prodScalaire);























	return 0;
}