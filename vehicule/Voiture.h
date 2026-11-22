#pragma once
#include "Vehicules.h"
class Voiture :public Vehicules
{
private:
	int qtefoel;
public:
	Voiture(int , string,int);
	void afficher() const override ;
	~ Voiture();


};

