#include "SideProduct.hpp"
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