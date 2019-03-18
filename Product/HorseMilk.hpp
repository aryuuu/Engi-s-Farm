#include "FarmProduct.hpp"

#ifndef HORSEMILK_HPP
#define HORSEMILK_HPP

//merupakan kelas yang didapat 
//setelah melakukan interaksi dengan Horse
class HorseMilk: public FarmProduct{
private:

public:
	//constructor
	HorseMilk(string nama, int harga);
	//set nama produk
	void setNama(string n);
	//mengembalikan nama produk
	string getNama() const;
}

#endif