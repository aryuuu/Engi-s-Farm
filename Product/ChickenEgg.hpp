#include "FarmProduct.hpp"

#ifndef CHICKENEGG_HPP
#define CHICKENEGG_HPP

/**
*merupakan kelas yang didapat ketika 
*melakukan interaksi dengan kelas Chicken
**/
class ChickenEgg: public FarmProduct{
private:

public:
	/**
	*constructor
	**/
	ChickenEgg(string nama, int harga);
	/**
	*set nama produk
	**/
	void setNama(string n);
	/**
	*mengembalikan nama produk
	**/
	string getNama() const;
}

#endif