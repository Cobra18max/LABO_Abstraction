
#include "Validateur.h"


Validateur::~Validateur() {
	for(auto& regle : reglesValidation) {
		delete regle;
	}
}

void Validateur::ajouterRegle(Regle* regle) {
	reglesValidation.push_back(regle);
}


bool Validateur::valider(const Produit& produit) {
	for(auto& regle : reglesValidation) {
		bool valide = regle->validerProduit(produit);
		cout << "Règle " << regle->getId() << " : " << (valide ? "Valide" : "Invalide") << std::endl;
		if (!valide) return false;
	}
	return true;
}