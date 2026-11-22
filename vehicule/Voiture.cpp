#include "Voiture.h"


Voiture::Voiture(int q, string m,int v):Vehicules(m,v)
{
	this->qtefoel = q;
}

void Voiture::afficher() const {
	this->Vehicules::afficher();
	cout << this->qtefoel << endl;

}


Voiture::~Voiture()
{
	cout << "le destructeur de la classe voiture" << endl;
}

