#ifndef PRODUCT_HPP
#define PRODUCT_HPP


//kelas Product merupakan kelas yang menggambarkan
//segala jenis produk yang didapat
//baik setelah interaksi dengan Animal, menyembelih
//dan setelah melakukan pengolahan
class Product{
	private :
		const int harga; //harga produk
		const string nama; //nama produk
	public :
		//constructor
		Product(int h, int n);

		//getter 
		//mengembalikan harga produk
		virtual int getHarga() const;

		virtual string getNama() const;

		//setter 
		//set harga produk
		virtual void setHarga();
		//set nama produk
		virtual void setNama();
		
};




#endif