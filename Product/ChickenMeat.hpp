#include "FarmProduct.hpp"

#ifndef CHICKENMEAT_HPP
#define CHICKENMEAT_HPP

/**
*merupakan kelas yang didapat setelah menyembelih
*Chicken
**/
class ChickenMeat: public FarmProduct{
private:
	/**
	*harga produk
	**/
	const int price = 25000;
public:
	/**
	*constructor
	**/
	ChickenMeat();

};

#endif