#include "FarmProduct.hpp"

#ifndef CHICKENMEAT_HPP
#define CHICKENMEAT_HPP

//merupakan kelas yang didapat setelah menyembelih
//Chicken
class ChickenMeat: public FarmProduct{
private:

public:
	//constructor
	ChickenMeat(string nama, int harga);
	//set nama produk
	void setNama(string n);
	//mengembalikan nama produk
	string getNama() const;
}

#endif