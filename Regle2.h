#pragma once
#include "Regle.h"
#include<string>
#include"Produit.h"
using namespace std;

class Regle2: public Regle
{
public:
	string getId() const override;
	bool validerProduit(const Produit& produit)const override;
};
