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

void afficheEmployes(Semployes& emp) {
	cout << endl << "		Informations sur l'employe  ";
	cout << endl << "Nom : " << emp.nom;
	cout << endl << "Prenom :" << emp.prenom;
	cout << endl << "Date d'embauche : " << emp.dates.dateEmbauche;
	cout << endl << "Date de prise de fonctions : " << emp.dates.datePriseFonction;
}

void infoEmployes(Semployes& emp) {
	saisieEmployes(emp);
	afficheEmployes(emp);
}

int main() {
	cout << endl << "Gestion Employes";

	Semployes emp1;
	infoEmployes(emp1);



	return(EXIT_SUCCESS);
}