#include <iostream>
using namespace std;

struct Masina {
	int numarUsi;
	bool esteElectrica;
	float capacitateMotor;
	string model;

};

void afisare(Masina masina) {
	cout << endl;
	cout << "Model: " << masina.model << endl;
	cout << "Numar usi: " << masina.numarUsi << endl;
	cout << "Capacitate motor: " << masina.capacitateMotor << endl;
	cout << "Electrica: " << (masina.esteElectrica == true ? "DA" : "NU") << endl;
	cout << endl;
}

void modificaNumarUsi(Masina* masina, int numarNouUsi) {
	masina->numarUsi = numarNouUsi;
}

void modificaNumarUsiRef(Masina& masina, int numarNouUsi) {
	masina.numarUsi = numarNouUsi;
}

void main()
{
	Masina masina;
	masina.numarUsi = 5;
	masina.esteElectrica = true;
	masina.capacitateMotor = 1.5;
	masina.model = "Peugeot 3005";

	afisare(masina);

	Masina masina2;

	cout << "Introdu datele masinii: " << endl;
	cout << "Model: ";
	cin >> masina2.model;

	cout << "Capacitate motor: ";
	cin >> masina2.capacitateMotor;

	cout << "Numar usi: ";
	cin >> masina2.numarUsi;

	cout << "Masina este electrica: 1 - DA , 0 - NU: ";
	cin >> masina2.esteElectrica;

	afisare(masina2);

	int numarNouUsi;
	cout << "Introdu numarul nou de usi: ";
	cin >> numarNouUsi;
	modificaNumarUsi(&masina2, numarNouUsi);
	afisare(masina2);

	int a = 50;
	int* pa = &a;

}