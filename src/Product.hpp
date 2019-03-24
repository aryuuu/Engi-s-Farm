#include <iostream>
using namespace std;

#ifndef PRODUCT_HPP
#define PRODUCT_HPP


/**kelas Product merupakan kelas yang menggambarkan
*segala jenis produk yang didapat
*baik setelah interaksi dengan Animal, menyembelih
*dan setelah melakukan pengolahan
**/
class Product{
	private :
		/**
		*harga produk
		**/
		const int harga;
		/**
		*nama produk
		**/
		const string nama;
	public :


		/**
		*getter
		**/
		/**
		*mengembalikan harga produk
		**/
		virtual int getHarga() const;
		/**
		*mengembalikan nama produk
		**/
		virtual string getNama() const;

		/**
		*setter
		**/
		/**
		*set harga produk
		**/
		virtual void setHarga(int h);
		/**
		*set nama produk
		**/
		virtual void setNama(string n);

};




#endif
