#include "../SideProduct.hpp"
#ifndef BUTTERMILKCHICKEN_HPP
#define BUTTERMILKCHICKEN_HPP

/**
*merupakan kelas hasil olahan
*ChickenMeat dan CowMilk
**/
class ButterMilkChicken: public SideProduct{
private:

public:
	/**
	*constructor
	**/
	ButterMilkChicken(string nama, int harga);

	/**
	*mengembalikan true jika FarmProduct
	*yang dimiliki Player memenuhi resep untuk membuat ButtermilkChicken
	**/
	bool available(Player P);

};
#endif
