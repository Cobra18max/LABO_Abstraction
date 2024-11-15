#include "ClasseEnfant.h"
#include "Regle2.h"
#include"RegleComplexe.h"

class RegleComplexe;

bool ClasseEnfant::validationComplexe(const Produit& produit){
    // Apply validation of Regle2
    for (auto& rule : rules) {
        bool isValide = rule->validerProduit(produit);

        // Check if the product is in stock
        if (!produit.getenStock()) {
            return false;
        }

        // Other complex validations...

        return isValide;
    }
}

bool ClasseEnfant::validerProduit(const Produit& produit)const {

    return produit.getPrix() > 0;

}