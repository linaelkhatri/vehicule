#include "Vehicules.h"
#include "Voiture.h"

Vehicules::Vehicules(string m, int v)
{
	this->marque = m;
	this->vitesse = v;

}

void Vehicules::afficher() const
{ 
	cout << "afficher le vehicule" << endl;
	cout << this->marque << endl;
	cout << this->vitesse << endl;
}



Vehicules::~Vehicules()
{
	cout << "le destructeur de vehicule" << endl;
}
