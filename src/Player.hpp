/**
  * @file Player.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Player
  * @version 1
  * @date 2019-03-19
  */

#include "LinkedList.hpp"
#include "Product.hpp"
#include <iostream>
#ifndef _PLAYER_HPP
#define _PLAYER_HPP

/** Class Player mendefinisikan tipe pemain;
  * Memiliki tas,posisi x dan y, uang , dan air;
  * Method beruhungan dengan pergerakan pemain dan perintah seperti talk, interact, dan kill; */
class Player{
	private:
		int water; // Jumlah kapasitas gembor (Alat penyiraman) yang tersisa untuk menyiram rumput
		int money; // Jumlah uang yang dimiliki player
		int x,y; // Posisi Absis dan Ordinat player
		LinkedList<Product*> bag; // List yang menyimpan produk yang dihasilkan dari hewan
	public:
		//getter
		int getWater() const; //mengambil atribut water
		int getMoney() const; //mengambil atribut money
		int getX() const; //mengambil atribut x (posisi Absis player)
		int getY() const; //mengambil atribut y (posisi Ordinat player)
		Product* getBag(int idx) const; ////mengambil Product yang ada dalam LinkedList Bag pada indeks idx
		//setter
		void setWater(); //mengubah nilai atribut water
		void setMoney(); //mengubah nilai atribut money
		void setX(); //mengubah nilai atribut x (posisi Absis player)
		void setY();//mengubah nilai atribut y (posisi Ordinat player)
		void setBag(int idx); //mengubah nilai atribut LinkedList pada indeks idx

		void playerMove(char move); //Memindahkan posisi player ke atas / kanan / bawah / kiri dengan parameter input charr u/r/d/l dan posisi harus valid (harus divalidasi dulu)
		void delProduct(string NamaProduct); //Menghapus product dari bag dengan parameter input NamaProduct
		void delProductAll(); //Mengosongkan Bag
		void reduceWater(); //Mengkurangi atribut water yang ada didalam gebor (Alat penyiraman)
		void addProduct(Product* Prod); //Menambahkan Product Prod ke Bag dan ditaruh di paling belakang
		void addWater(); //Mengisi gebor dengan air secara maksimal (sesuai kapasitas) dengan mengubah atribut water
		void addMoney(int harga); //Menambah atribut money sesuai dengan harga
};
#endif
