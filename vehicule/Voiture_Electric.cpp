#include "Voiture_Electric.h"
#include"Vehicules.h"
#include"Voiture.h"

Voiture_Electric::Voiture_Electric(int q, string m,int v, int n):Voiture(q,m,v)
{
	this->NiveauBatterie = n;
}

void Voiture_Electric::afficher() const
{
	this->Voiture::afficher();
	cout << "niveau de batterie est:" << NiveauBatterie <<endl;

}

Voiture_Electric::~Voiture_Electric()
{
	cout << "le destructeur de voiture electrique:" << endl;
}

