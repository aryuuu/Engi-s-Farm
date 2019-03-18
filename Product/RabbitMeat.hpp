#include "FarmProduct.hpp"
#ifndef RABBITMEAT_HPP
#define RABBITMEAT_HPP

//RabbitMeat adalah kelas yang menggambarkan produk yang didapatkan
//setelah menyembelih Rabbit
class RabbitMeat: public FarmProduct{
private:

public:
	//constructor
	RabbitMeat(string nama, int harga);
	//set nama produk
	void setNama(string n);
	//mengembalikan nama produk
	string getNama() const;
}

#endif