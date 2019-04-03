#include "FarmProduct.hpp"
#ifndef RABBITMEAT_HPP
#define RABBITMEAT_HPP

/**
*RabbitMeat adalah kelas yang menggambarkan produk yang didapatkan
*setelah menyembelih Rabbit
**/
class RabbitMeat: public FarmProduct{
private:
	/**
	*harga produk
	**/
	const int price = 30000;
public:
	/**
	*constructor
	**/
	RabbitMeat();

};

#endif