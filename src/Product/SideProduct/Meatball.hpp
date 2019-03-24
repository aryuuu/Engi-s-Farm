#include "../SideProduct.hpp"
#ifndef MEATBALL_HPP
#define MEATBALL_HPP

/**
*merupakan kelas hasil olahan
*CowMeat, ChickenEgg, dan CowMilk
**/
class Meatball: public SideProduct{
private:

public:
	/**
	*constructor
	**/
	Meatball(string nama, int harga);

	/**
	*mengembalikan true jika FarmProduct
	*yang dimiliki Player memenuhi resep untuk membuat Meatball
	**/
	bool available(Player P);

};
#endif
