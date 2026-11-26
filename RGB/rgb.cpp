// rgb.cpp
// Blanche Bessy
// 24/11

#include <iostream>
using namespace std;

struct Srgb {
	unsigned char r, g, b;
};

union Ucolor {
	unsigned int val;
	Srgb components;
	unsigned char tabCol[3];
};


int main() {
	cout << endl << "RGB";
	
	int choix;
	Srgb rgb;
	unsigned char tabCoul[3];
	Ucolor couleur;

	

	cout << "Choissisez (entre 1 et 3) le type à fournir : " << endl;
	cin >> hex >> choix;
	switch (choix) {
		
	case 1:		// on choisit la structure qui comporte r, g, b (remplit rgb (structure rgb)
		cin >> hex >> rgb.r;
		cin >> hex >> rgb.g;
		cin >> hex >> rgb.b;
		couleur.components = rgb;
		cout << "couleur : #" << couleur.components.r << couleur.components.g << couleur.components.b;
		break;
		
	case 2:		// on choisit le tableau qui comporte r, g, b (remplit tabCoul)
		cin >> tabCoul[0];
		cin >> tabCoul[1];
		cin >> tabCoul[2];
		//strcpy(couleur.tabCol, tabCoul);
		//cout << "couleur : #" << couleur.tabCol[0] << couleur.tabCol[1] << couleur.tabCol[2];
		break;

	case 3:		// on choisit la valeur
		cin >> hex >> couleur.val;	// = (b * 256 ^ 2 + g * 256 + r)
		cout << "couleur : #" << hex << couleur.val;
		break;
	}

	

	return(EXIT_SUCCESS);
}