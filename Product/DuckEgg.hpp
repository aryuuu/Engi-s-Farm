#include "FarmProduct.hpp"

#ifndef DUCKEGG_HPP
#define DUCKEGG_HPP

/**
*merupakan kelas yang didapat setelah
*interaksi dengan Duck
**/
class DuckEgg: public FarmProduct{
private:
	/**
	*harga produk
	**/
	const int price = 3000;
public:
	/**
	*constructor
	**/
	DuckEgg();
	
};

#endif