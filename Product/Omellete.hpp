#include "SideProduct.hpp"
#ifndef COMBOSTEAK_HPP
#define COMBOSTEAK_HPP 

/**
*merupakan kelas hasil olahan
*dari ChickenEgg dan CowMilk
**/
class Omellete: public SideProduct{
private:
//harga produk
	const int price = 15000;
public:
	/**
	*constructor
	**/
	Omellete();

	/**
	*mengembalikan true jika FarmProduct
	*yang dimiliki Player memenuhi resep untuk membuat Omellete
	**/
	
};
#endif
