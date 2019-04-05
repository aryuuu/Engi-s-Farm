#include "SideProduct.hpp"
#ifndef MEATBALL_HPP
#define MEATBALL_HPP 

/**
*merupakan kelas hasil olahan
*CowMeat, ChickenEgg, dan CowMilk
**/
class Meatball: public SideProduct{
private:
	int nresep = 3; //banyak jenis FarmProduct yang jadi bahan
	string resep[3] = {"CowMeat","ChickenEgg","CowMilk"}; //daftar nama FarmProduct yang jadi bahan dasar
	//harga produk
	const int price = 150000;
public:
	/**
	*constructor
	**/
	Meatball();

	/**
	*mengembalikan nama resep di index i
	*asumsi 0 <= i < nresep
	**/
	string getResep(int i);

	/**
	*mengembalikan jumlah resep
	**/
	int getNResep();
	
};
#endif
