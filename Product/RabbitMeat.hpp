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
	*tidak ada atribut
	**/

public:
	/**
	*constructor
	**/
	RabbitMeat(string nama, int harga);

}

#endif