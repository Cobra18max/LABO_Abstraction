#include "Regle1.h"
#include <string>
#include "Produit.h"

string Regle1:: getId()  const  {
	return "UN";
};

bool Regle1:: validerProduit(const Produit& produit)const {

	return produit.getenStock() == 1;

}