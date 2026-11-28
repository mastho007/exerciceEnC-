
#include "CSetInt.h"
#include <iostream>
using namespace std;

void afficheStatObjet(const CSetInt &oSetInt) {

	printf("L'objet %d contient %d entiers, il reste %d places dans le tableau.\n",
	       CSetInt::getNbreTotObjet(),
	       oSetInt.getCardinal(),
	       oSetInt.getTailleMax() - oSetInt.getCardinal());

}

void afficheLetat(CSetInt::Etat ajoutEtat)
{

	switch (ajoutEtat)
	{

	case CSetInt::EXISTANT:

		printf("Cet entier est deja dans l'ensemble d'entier.\n");
		break;

	case CSetInt::COMPLET:

		printf("Cet ensemble est complet.\n");

		break;

	case CSetInt::VALIDE:

		printf("L'entier a bien ete ajoute.\n");

		break;

	default:
		printf("Un cas bizzard.\n");
		break;
	}
}

int main()
{
	// on créé l'objet qui va contenir nos entiers
	CSetInt oSetInt;

	bool fini = false;

	while (fini != true)
	{

		// Affiche un menu interactif
		printf("Veuillez choissir :\n");
		printf("1. Ajouter un entier\n2. Afficher le cardinal\n3. Quitter\n");
		int entree;

		cin >> entree;

		switch (entree)
		{

		case 1:
		{

			int entier;
			// tentative ajout entier
			printf("entrer un entier a ajouter :\n");
			cin >> entier;

			CSetInt::Etat ajoutEtat = oSetInt.ajouterUnEntier(entier);

			afficheLetat(ajoutEtat);

			break;
		}

		case 2:
		{

			printf("Le cardinal est de %d elements.\n", oSetInt.getCardinal());

			break;
		}

		case 3:
		{

			printf("Fin du programme.\n");
			fini = true;

			break;
		}

		default:
			break;
		}
	}


	//------------------------------------
	// 1.Test des opérateur de conversion 
	//------------------------------------
	cout << "--- 1. Test des operateurs de conversion. ---" << endl;

	cout << "	L'ensemble contient " << (int)oSetInt << " element." << endl;

	cout << "	Est ce que l'ensemble contient au moins un element ? -> " << boolalpha << (bool)oSetInt << endl;


	//-----------------------------------
	//2.Tests pour les opérateurs < et []
	//-----------------------------------
	cout << "--- 2. Test de l'operateur < d'ajout d'entier ---\n";

	CSetInt oCSetInt2(10);

	oCSetInt2 < 10 < 15 < 20;
	printf("Resultat attendu : \n");
	printf("L'objet %d contient 3 entiers, il reste 7 places dans le tableau.\n", CSetInt::getNbreTotObjet());

	printf("Resultat obtenu  : \n");
	afficheStatObjet(oCSetInt2);

	cout << "--- 2. Test de l'operateur [] ---\n";

	printf("Resultat attendu : %d\n", 1);
	printf("Resultat obtenu  : %d\n", oCSetInt2[15]);




	return 0;
}