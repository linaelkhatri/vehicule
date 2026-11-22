
#pragma once
#include<iostream>
#include<string>
using namespace std;
class Vehicules
{
private:
	string marque;
	int vitesse;
public:
	Vehicules(string, int);
	 virtual  void afficher() const ;
	virtual ~Vehicules();

};


