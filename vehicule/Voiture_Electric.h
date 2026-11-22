#pragma once
#include "Voiture.h"

class Voiture_Electric : public Voiture
{
private:
    int NiveauBatterie;

public:
    Voiture_Electric(int, string, int, int);
    void afficher() const override;
    ~Voiture_Electric();
};

