#include "SideProduct.hpp"
#ifndef BUTTERMILKCHICKEN_HPP
#define BUTTERMILKCHICKEN_HPP 

/**
*merupakan kelas hasil olahan
*ChickenMeat dan CowMilk
**/
class ButtermilkChicken: public SideProduct{
private:
	//harga produk
	const int price = 45000;
public:
	/**
	*constructor
	**/
	ButtermilkChicken();

	/**
	*mengembalikan true jika FarmProduct
	*yang dimiliki Player memenuhi resep untuk membuat ButtermilkChicken
	**/

};
#endif
