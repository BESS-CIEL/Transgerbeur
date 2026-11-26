// gestionEmp.cpp
// Blanche Bessy
// 24/11

#include <iostream>
using namespace std;

struct Sdates {
	char* dateEmbauche, datePriseFonction;
};
struct Semployes {
	char* nom;
	char* prenom;
	Sdates dates;
};



int main() {
	cout << endl << "Gestion Employes";
	return(EXIT_SUCCESS);
}