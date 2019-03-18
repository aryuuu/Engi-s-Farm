#include "FarmProduct.hpp"

#ifndef COWMILK_HPP
#define COWMILK_HPP

//merupakan kelas yang didapat setelah
//interaksi dengan Cow
class CowMilk: public FarmProduct{
private:

public:
	//constructor
	CowMilk(string nama, int harga);
	//set nama produk
	void setNama(string n);
	//mengembalikan nama produk
	string getNama() const;
}

#endif