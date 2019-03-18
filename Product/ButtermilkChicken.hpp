#include "SideProduct.hpp"
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