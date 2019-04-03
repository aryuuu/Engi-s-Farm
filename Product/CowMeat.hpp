#include "FarmProduct.hpp"

#ifndef COWMEAT_HPP
#define COWMEAT_HPP

/**
*merupakan kelas yang didapat setelah
*menyembelih Cow
**/
class CowMeat: public FarmProduct{
private:
	/**
	*harga produk
	**/
	const int price = 100000;
public:
	/**
	*constructor
	**/
	CowMeat();

};

#endif