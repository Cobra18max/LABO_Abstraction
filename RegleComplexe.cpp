
#include "RegleComplexe.h"
#include "ClasseEnfant.h"
#include "Produit.h"
  

bool RegleComplexe::validerProduit(const Produit& produit) const  {
    return ClasseEnfant().validerProduit(produit);
}
