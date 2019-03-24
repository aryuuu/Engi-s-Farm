#include "../FarmProduct.hpp"

#ifndef COWMEAT_HPP
#define COWMEAT_HPP

/**
*merupakan kelas yang didapat setelah
*menyembelih Cow
**/
class CowMeat: public FarmProduct{
private:
	/**
	*tidak ada atribut
	**/
public:
	/**
	*constructor
	**/
	CowMeat(string nama, int harga);

};

#endif
