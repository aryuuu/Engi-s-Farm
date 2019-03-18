#include "FarmProduct.hpp"

#ifndef DUCKEGG_HPP
#define DUCKEGG_HPP

/**
*merupakan kelas yang didapat setelah
*interaksi dengan Duck
**/
class DuckEgg: public FarmProduct{
private:

public:
	/**
	*constructor
	**/
	DuckEgg(string nama, int harga);
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