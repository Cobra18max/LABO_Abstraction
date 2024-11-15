#pragma once
#include "Regle.h"
#include"Produit.h"
#include<string>

class Regle1: public Regle
{
public:
	
	string getId() const override ;
	bool validerProduit(const Produit& produit)const override;
};

