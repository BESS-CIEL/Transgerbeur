// Transgerbeur.cpp
// Blanche Bessy
// 24/11


#include <iostream>
using namespace std;


enum EETAT { vide, palette, rouleau };


struct SPal {	// type SPal pour palette, contient poids et reference
	int poids;
	char* ref;
};
struct SRoul {	// type SRoul pour rouleau, contient longueur et numero de serie
	float longueur;
	int numSerie;
};
// ex SRoul Ro1; Ro1.longueur = 15.2;

union UCont {	// type UCont pour contenu, contient palette ou rouleau
	SPal palette;
	SRoul rouleau;
};

struct SCasier {	// type SCasier pour casier, contient px, py, contenu et etat
	int px, py;
	UCont contenu;
	EETAT etat;

};



int main() {
	cout << endl << "Transgerbeur";


	// déclaration des variables


	int px, py;
	float longueur;
	char* ref;
	int numSerie, poids;

	
	SRoul ro1 = {10,1};

	SPal pa1;
	pa1.poids = 10;
	//strcpy(pa1.ref,"");

	EETAT etatC1 = EETAT::vide;

	UCont cont = { pa1 };
	cont.rouleau = ro1;
	
	// casier 1
	SCasier c1;
	c1.contenu = cont;
	c1.etat = rouleau;
	c1.px = 2;
	c1.py = 3;

	c1.contenu.rouleau.numSerie = 354;

	// casier 2
	SCasier c2;
	c2.etat = palette;


	// ensemble de casiers
	SCasier Ensemble[9];
	Ensemble[0] = c1;
	Ensemble[2] = c2;
	
	// affichage des tailles
	cout << endl << "taille de ro1 : " << sizeof(ro1);
	cout << endl << "taille de pa1 : " << sizeof(pa1);
	cout << endl << "taille de etatC1 : " << sizeof(etatC1);
	cout << endl << "taille de cont : " << sizeof(cont);
	cout << endl << "taille de c1 : " << sizeof(c1);
	cout << endl << "taille de c2 : " << sizeof(c2);
	cout << endl << "taille de Ensemble : " << sizeof(Ensemble);


	

	return(EXIT_SUCCESS);
}