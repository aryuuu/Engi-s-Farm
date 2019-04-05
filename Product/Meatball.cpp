#include "Meatball.hpp"
#include <iostream>

using namespace std;

Meatball::Meatball(){
	this->setNama("Meatball");
	this->setHarga(this->price);
}

string Meatball::getResep(int i ){
	return this->resep[i];
}

int Meatball::getNResep(){
	return this->nresep;
}