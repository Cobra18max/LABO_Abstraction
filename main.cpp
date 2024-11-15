#include "Produit.h"
#include "Validateur.h"
#include "GestionnaireRegles.h"
#include "Regle.h"
#include "Regle1.h"
#include "Regle2.h"
#include "Regle3.h"
#include "RegleComplexe.h"

int main() {
    // Création des produits
    Produit p1("1", 20, true, 11);
    Produit p2("2", -1, false, 22);
    Produit p3("3", 10, true, 33);
    Produit p4("4", 20, false, 44);
    Produit p5("5", 999, true, -10);

    // Création du validateur
    Validateur validateur;

    // Ajout des règles
    validateur.ajouterRegle(GestionnaireRegles::getRegle1());
    validateur.ajouterRegle(GestionnaireRegles::getRegle2());
    validateur.ajouterRegle(GestionnaireRegles::getRegle3());
    validateur.ajouterRegle(GestionnaireRegles::getRegleComplexe());

    // Validation des produits
    Produit produits[] = { p1, p2, p3, p4, p5 };
    for (const auto& produit : produits) {
        bool valide = validateur.valider(produit);
        std::cout << "Produit valide : " << std::boolalpha << valide << "\n\n";
    }

    return 0;
}
