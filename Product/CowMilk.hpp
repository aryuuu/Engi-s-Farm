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
	*tidak ada atribut
	**/
public:
	/**
	*constructor
	**/
	CowMilk(string nama, int harga);

}

#endif