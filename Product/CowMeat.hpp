#include "FarmProduct.hpp"

#ifndef COWMEAT_HPP
#define COWMEAT_HPP

/**
*merupakan kelas yang didapat setelah
*menyembelih Cow
**/
class CowMeat: public FarmProduct{
private:

public:
	/**
	*constructor
	**/
	CowMeat(string nama, int harga);
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