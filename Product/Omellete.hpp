#include "SideProduct.hpp"
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
	*getter
	**/
	/**
	*mengembalikan harga
	**/
	int getHarga() const;
	/**
	*mengembalikan nama
	**/
	string getNama() const;

	/**
	*setter
	**/
	/**
	*set harga 
	**/
	void setHarga() const;
	/**
	*set nama 
	**/
	void setNama() const;
	
	
};
#endif