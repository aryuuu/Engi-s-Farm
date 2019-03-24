#include "../FarmProduct.hpp"

#ifndef CHICKENEGG_HPP
#define CHICKENEGG_HPP

/**
*merupakan kelas yang didapat ketika
*melakukan interaksi dengan kelas Chicken
**/
class ChickenEgg: public FarmProduct{
private:
	/**
	*tidak ada atribut
	**/
public:
	/**
	*constructor
	**/
	ChickenEgg(string nama, int harga);

};

#endif
