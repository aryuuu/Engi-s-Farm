#include "SideProduct.hpp"
#ifndef COMBOSTEAK_HPP
#define COMBOSTEAK_HPP 

/**
*merupakan kelas hasil olahan
*dari ChickenEgg dan CowMilk
**/
class Omellete: public SideProduct{
private:
	int nresep = 2; //banyak jenis FarmProduct yang jadi bahan
	string resep[2] = {"ChickenEgg","CowMilk"}; //daftar nama FarmProduct yang jadi bahan dasar
//harga produk
	const int price = 15000;
public:
	/**
	*constructor
	**/
	Omellete();

	//getter resep

	//mengembalikan nama bahan untuk resep di index ke i
	//asumsi 0 <= i < nresep
	string getResep(int i);

	//mengembalikan jumlah bahan dasar resep
	int getNResep();
	
};
#endif
