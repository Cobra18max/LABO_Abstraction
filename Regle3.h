#pragma once
#include "Regle.h"
#include "Produit.h"
#include<string>
using namespace std;


class Regle3: public Regle
{
public:
	string getId()const override ;
	bool validerProduit(const Produit& produit)const override;
};

