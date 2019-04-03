#include "FarmProduct.hpp"

#ifndef CHICKENEGG_HPP
#define CHICKENEGG_HPP

/**
*merupakan kelas yang didapat ketika 
*melakukan interaksi dengan kelas Chicken
**/
class ChickenEgg: public FarmProduct{
private:
	/**
	*harga produk
	**/
	const int price = 2000;
public:
	/**
	*constructor
	**/
	ChickenEgg();
	
};

#endif