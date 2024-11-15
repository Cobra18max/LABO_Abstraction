
#include "Regle2.h"

string Regle2::getId() const {
	return "DEUX";
};

bool Regle2::validerProduit(const Produit& produit)const {
	
	return produit.getPrix() >0;

}