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
	*tidak ada atribut
	**/
public:
	/**
	*constructor
	**/
	DuckEgg(string nama, int harga);
	
}

#endif