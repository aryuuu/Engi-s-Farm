#include "Product.hpp"
#include <iostream>
using namespace std;

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