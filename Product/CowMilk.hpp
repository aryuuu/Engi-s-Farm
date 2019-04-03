#include "FarmProduct.hpp"

#ifndef COWMILK_HPP
#define COWMILK_HPP

/**
*merupakan kelas yang didapat setelah
*interaksi dengan Cow
**/
class CowMilk: public FarmProduct{
private:
	/**
	*harga produk
	**/
	const int price = 8000;
public:
	/**
	*constructor
	**/
	CowMilk();

};

#endif