#include "FarmProduct.hpp"

#ifndef HORSEMILK_HPP
#define HORSEMILK_HPP

/**
*merupakan kelas yang didapat 
*setelah melakukan interaksi dengan Horse
**/
class HorseMilk: public FarmProduct{
private:
	/**
	*harga produk
	**/
	const int price = 120000;
public:
	/**
	*constructor
	**/
	HorseMilk();

};

#endif