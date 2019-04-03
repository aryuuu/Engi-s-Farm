#ifndef PRODUCT_HPP
#define PRODUCT_HPP
#include <iostream>

using namespace std;

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
		int harga; 
		/**
		*nama produk
		**/
		string nama; 
	public :

		//cotr
		Product::Product();
		/**
		*getter 
		**/
		/**
		*mengembalikan harga produk
		**/
		int getHarga() const;
		/**
		*mengembalikan nama produk
		**/
		string getNama() const;

		/**
		*setter 
		**/
		/**
		*set harga produk
		**/
		void setHarga(int h);
		/**
		*set nama produk
		**/
		void setNama(string n);
		

		//mengembalikan 1 jika nama produk sama 
		int sama(Product);
};




#endif