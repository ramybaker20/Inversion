// Inversion.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
void affTab(int tab[], int taille)
{
	std::cout << "Tableau A \n";
	for (int i = 0; i < taille; i++)
	{
		std::cout << "tab[" << i << "] = " << tab[i] << std::endl;
	}
}

int main()
{
	int tab[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int AIDE, * p1, * p2;
	affTab(tab, 20);
	std::cout << "Inversion du tableau\n";
	p1 = tab;
	p2 = &tab[19];

	for (int i = 0; i < 20/2; i++)
	{
		AIDE = *p1;  // sauvegarde de la valeur initiale de *p1
		*p1 = *p2;   // permutation
		*p2 = AIDE;

		// passage à la case suivante
		p1++;
		p2--;
	}
	
	std::cout << "Tableau inverse\n";
	affTab(tab, 20);
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
