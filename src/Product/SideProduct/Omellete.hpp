#include "../SideProduct.hpp"
#ifndef COMBOSTEAK_HPP
#define COMBOSTEAK_HPP

/**
*merupakan kelas hasil olahan
*dari ChickenEgg dan CowMilk
**/
class Omellete: public SideProduct{
private:

public:
	/**
	*constructor
	**/
	Omellete(string nama, int harga);

	/**
	*mengembalikan true jika FarmProduct
	*yang dimiliki Player memenuhi resep untuk membuat Omellete
	**/
	bool available(Player P);

};
#endif
