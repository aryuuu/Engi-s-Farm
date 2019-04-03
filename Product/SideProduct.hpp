#include "Product.hpp"
#include "../Player.hpp"

#ifndef SIDEPRODUCT_HPP
#define SIDEPRODUCT_HPP

/**
*merupakan kelas interface dari side product
**/
class SideProduct: public Product{
private:
	/**
	*tidak ada atribut
	**/
	
public:
	/**
	*mengembalikan true jika FarmProduct
	*yang dimiliki Player memenuhi resep untuk membuat SideProduct
	**/
	virtual bool available(Player P);

};



#endif