#include "SideProduct.hpp"
#ifndef BUTTERMILKCHICKEN_HPP
#define BUTTERMILKCHICKEN_HPP 

/**
*merupakan kelas hasil olahan
*ChickenMeat dan CowMilk
**/
class ButtermilkChicken: public SideProduct{
private:
	int nresep = 2; //banyak jenis FarmProduct yang jadi bahan
	string resep[2] = {"ChickenMeat","CowMilk"}; //daftar nama FarmProduct yang jadi bahan dasar
	//harga produk
	const int price = 45000;
public:
	/**
	*constructor
	**/
	ButtermilkChicken();

	//mengembalikan nama bahan untuk resep di index ke i
	//asumsi 0 <= i < nresep
	string getResep(int i);

	//mengembalikan jumlah bahan dasar resep
	int getNResep();

};
#endif
