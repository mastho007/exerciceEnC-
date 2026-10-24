
#include "CSetInt.h"
#include <iostream>
using namespace std;
using enum CSetInt::Etat;


void afficheStatObjet(const CSetInt &oSetInt, int numObjet) {

	printf("\nL'objet %d contient %d entiers, il reste %d places dans le tableau.\n",
	       numObjet,
	       oSetInt.getCardinal(),
	       oSetInt.getTailleMax() - oSetInt.getCardinal());

}


void afficheLetat(CSetInt::Etat ajoutEtat) {

	switch(ajoutEtat) {

	case EXISTANT:

		printf("Cet entier est deja dans l'ensemble d'entier.\n");
		break;


	case COMPLET:

		printf("Cet ensemble est complet.\n");

		break;


	case VALIDE:

		printf("L'entier a bien ete ajoute.\n");

		break;

	default:
	    printf("Un cas bizzard.\n");
		break;
	}

}




int main()
{
	//on créé l'objet qui va contenir nos entiers
	CSetInt oSetInt;


	bool fini = false;


	while(fini != true) {

		//Affiche un menu interactif
		printf("Veuillez choissir :\n");
		printf("1. Ajouter un entier\n2. Afficher le cardinal\n3. Quitter\n");
		int entree;

		cin >> entree;

		switch(entree) {

		case 1: {

			int entier;
			//tentative ajout entier
			printf("entrer un entier a ajouter :\n");
			cin >> entier;


			CSetInt::Etat ajoutEtat = oSetInt.ajouterUnEntier(entier);

			afficheLetat(ajoutEtat);

			break;


		}

		case 2: {

			printf("Le cardinal est de %d elements.\n", oSetInt.getCardinal());

			break;
		}

		case 3: {

			printf("Fin du programme.\n");
			fini = true;

			break;
		}

		default:
			break;


		}






	}








	return 0;
}