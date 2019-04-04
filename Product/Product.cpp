#include "Product.hpp"
#include <iostream>
using namespace std;

//ctor buat bikin list
Product::Product(){
	this->setNama("-");
	this->setHarga(-1);
}

bool Product::operator==(const Product& P){
	if(this->getNama() == P.getNama()){
		return 1;
	} else {
		return 0;
	}
}
/**
*mengembalikan nama dari produk
**/
string Product::getNama() const{
	return this->nama;
}

/**
*mengembalikan harga dari produk
**/
int Product::getHarga() const{
	return this->harga;
}

/**
* set harga produk
**/
void Product::setHarga(int h){
	this->harga = h;
}

/**
*set nama produk
**/
void Product::setNama(string n){
	this->nama = n;
}

//mengembalikan 1 jika nama produk sama 
int Product::sama(Product P){
	if(this->getNama() == P.getNama()){
		return 1;
	} else {
		return 0;
	}
}
