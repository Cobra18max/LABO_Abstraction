#ifndef REGLECOMPLEXE_H
#define REGLECOMPLEXE_H

#pragma once
#include "Regle.h"
#include "Produit.h"
#include "ClasseEnfant.h"
#include<string>

class ClasseEnfant;

class RegleComplexe : public Regle
{
public:
	string getId() const override { return "COMPLEXE"; }
	bool validerProduit(const Produit& produit)const  override;
private:
	class ClasseEnfant* enfant();
};



#endif // !


