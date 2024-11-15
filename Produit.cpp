
#include "Produit.h"
#include <string>

 ostream& operator<<(ostream& os, const Produit& produit) {
	os <<"produit " << produit.id << " {" 
		<< produit.enStock << "/ "
		<< produit.prix << "$ / "
	   << produit.quantite << "}" 
		<< endl;	
	return os;
}