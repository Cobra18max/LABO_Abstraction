#pragma once
#include "Regle.h"
#include "Produit.h"
#include <list>

class Validateur
{
public: 
	bool valider(const Produit& produit);
	void ajouterRegle(Regle* regle);
	~Validateur();
private:
	list <Regle*> reglesValidation;
};

