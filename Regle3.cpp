
#include "Regle3.h"

string Regle3:: getId()const {
	return "TROIS";
};

bool Regle3::validerProduit(const Produit& produit)const {

	return produit.getQuantite() > 0;

}