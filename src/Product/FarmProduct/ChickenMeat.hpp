#include "../FarmProduct.hpp"

#ifndef CHICKENMEAT_HPP
#define CHICKENMEAT_HPP

/**
*merupakan kelas yang didapat setelah menyembelih
*Chicken
**/
class ChickenMeat: public FarmProduct{
private:
	/**
	*tidak ada atribut
	**/
public:
	/**
	*constructor
	**/
	ChickenMeat(string nama, int harga);

};

#endif
