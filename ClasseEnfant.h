#ifndef CLASSEENFANT_H
#define CLASSEENFANT_H

#include "RegleComplexe.h"
#pragma once
#include "Produit.h"
#include "Regle2.h" 
#include <list>

class RegleComplexe;
class ClasseEnfant :virtual public RegleComplexe
{
public:
	bool validerProduit(const Produit& produit) const;
	bool validationComplexe(const Produit& produit);
	ClasseEnfant() {
		rules.push_back(new Regle2());
	}
private:
	list <Regle2*> rules;
};



#endif // !


