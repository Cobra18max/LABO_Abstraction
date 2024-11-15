#pragma once
#include<string>
#include <iostream>
using namespace std;

class Produit {

private:
	string id;
	int prix;
	int quantite;
	bool enStock;

public:
	Produit() : id(""), prix(0), quantite(0), enStock(false) {cout << "constructeur Produit" << endl;}

	~Produit(){cout<<"destructeur Produit"<<endl;}
	Produit(const std::string& id, int quantite, bool enStock, int prix)
		: id(id), quantite(quantite), enStock(enStock), prix(prix) {}
	string getId() const{return id;}
	int getPrix()const {return prix;}
	int getQuantite()const{return quantite;}
	bool getenStock()const {return enStock;}
	friend ostream& operator<<(ostream& os, const Produit& produit);
	

};
