// Transgerbeur.cpp
// Blanche Bessy
// 24/11

#include <iostream>
using namespace std;


enum EETAT { vide, palette, reseau };


struct SPal {	// type SPal pour palette, contient poids et reference
	int poids;
	char* ref;
};
struct SRoul {	// type SRoul pour rouleau, contient longueur et numero de serie
	float longueur;
	int numSerie;
};
// ex SRoul Ro1; Ro1.longueur = 15.2;

union UCont {	//
	SPal palette;
	SRoul rouleau;
};

struct SCasier {
	int px;
	int py;
	UCont contenu;
	EETAT etat;

};



int main() {
	cout << endl << "Transgerbeur";


	// déclaration des variables
	int Ensemble[9];	// contient 9 casiers

	int px, py;
	float longueur;
	char* ref;
	int numSerie, cont, poids;
	EETAT etat;
	UCont cont;
	SPal palette;
	SRoul rouleau;
	SCasier casier;
	
	

	return(EXIT_SUCCESS);
}