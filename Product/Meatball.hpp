#include "SideProduct.hpp"
#ifndef MEATBALL_HPP
#define MEATBALL_HPP 

/**
*merupakan kelas hasil olahan
*CowMeat, ChickenEgg, dan CowMilk
**/
class Meatball: public SideProduct{
private:
	//harga produk
	const int price = 150000;
public:
	/**
	*constructor
	**/
	Meatball();

	/**
	*mengembalikan true jika FarmProduct
	*yang dimiliki Player memenuhi resep untuk membuat Meatball
	**/
	bool available(Player P);
	
};
#endif