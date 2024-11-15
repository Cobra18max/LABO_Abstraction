#pragma once
#include "Produit.h"
#include <string>

class Regle
{
public:
	virtual bool  validerProduit(const Produit& produit)const =0;
	virtual string getId() const =0;
	virtual ~Regle() {};
};

