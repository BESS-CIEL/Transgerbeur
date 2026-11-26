// gestionEmp.cpp
// Blanche Bessy
// 24/11

#include <iostream>
using namespace std;

struct Sdates {
	char dateEmbauche[12], datePriseFonction[12];
};
struct Semployes {
	char nom[20];
	char prenom[20];
	Sdates dates;
};

void saisieEmployes(Semployes& emp) {
	cout << endl << "Rentrez le nom : ";
	cin >> emp.nom;
	cout << "Rentrez le prenom : ";
	cin >> emp.prenom;
	cout << "Rentrez la date d'embauche : ";
	cin >> emp.dates.dateEmbauche;
	cout << "Rentrez la date de prise de fonctions : ";
	cin >> emp.dates.datePriseFonction;
}

int main() {
	cout << endl << "Gestion Employes";

	Semployes emp1;
	saisieEmployes(emp1);
	// cout << emp1.nom << endl << emp1.prenom	<< endl << emp1.dates.dateEmbauche << endl << emp1.dates.datePriseFonction;



	return(EXIT_SUCCESS);
}