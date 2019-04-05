#include "ButtermilkChicken.hpp"
#include <iostream>

using namespace std;

ButtermilkChicken::ButtermilkChicken(){
	this->setNama("ButtermilkChicken");
	this->setHarga(this->price);
}

string ButtermilkChicken::getResep(int i ){
	return this->resep[i];
}

int ButtermilkChicken::getNResep(){
	return this->nresep;
}
