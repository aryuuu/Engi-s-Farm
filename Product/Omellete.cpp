#include "Omellete.hpp"
#include <iostream>

using namespace std;

Omellete::Omellete(){
	this->setNama("Omellete");
	this->setHarga(this->price);
}

string Omellete::getResep(int i ){
	return this->resep[i];
}

int Omellete::getNResep(){
	return this->nresep;
}


