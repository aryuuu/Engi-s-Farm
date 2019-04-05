#include <iostream>
#define MAXWATER 25
#define MAXBAG 25
#include "Player.hpp"
#include "Product.cpp"
using namespace std;
Player::Player(){
	setMoney(0);
	setWater(0);
	setX(0);
	setY(0);
	delProductAll();
}
int Player::getWater() const //mengambil atribut water
{
	return water;
}
int Player::getMoney() const //mengambil atribut money
{
	return money;
}
int Player::getX() const //mengambil atribut x (posisi Absis player)
{
	return x;
}
int Player::getY() const //mengambil atribut y (posisi Ordinat player)
{
	return y;
}
Product Player::getBag(int idx) const ////mengambil Product yang ada dalam LinkedList Bag pada indeks idx
{
	return bag.get(idx);
}
int Player::getSizeBag() //Menghitung ukuran tas
{
	return bag.length;
}	
//setter
void Player::setWater(int water) //mengubah nilai atribut water
{
	this->water=water;
}
void Player::setMoney(int money) //mengubah nilai atribut money
{
	this->money=money;
}
void Player::setX(int x) //mengubah nilai atribut x (posisi Absis player)
{
	this->x=x;
}
void Player::setY(int y)//mengubah nilai atribut y (posisi Ordinat player)
{
	this->y=y;
}
void Player::setBag(int idx, Product prod) //menghapus produk pada indeks i lalu menambahkan produk prod
{
	this->delProduct(bag.get(idx).getNama());
	this->addProduct(prod);
}	
void Player::playerMove(char move) //Memindahkan posisi player ke atas / kanan / bawah / kiri dengan parameter input charr u/r/d/l dan posisi harus valid (harus divalidasi dulu)
{
	if(move=='l'){
		y-=1;
	}else if(move=='r'){
		y+=1;
	}else if(move=='u'){
		x-=1;
	}else{
		x+=1;
	}
}
void Player::delProduct(string NamaProduct) //Menghapus product dari bag dengan parameter input NamaProduct
{
	Product cari;
	cari.setNama(NamaProduct);
	cari.setHarga(-1);
	bag.remove(cari);
}
void Player::delProductAll() //Mengosongkan Bag
{
	while(!bag.isEmpty()){
		bag.remove(bag.get(1));
	}
}
void Player::reduceWater() //Mengkurangi atribut water yang ada didalam gebor (Alat penyiraman)
{
	water-=1;
}
void Player::addProduct(Product Prod) //Menambahkan Product Prod ke Bag dan ditaruh di paling belakang
{
	if (this->getSizeBag()<=MAXBAG){
		bag.add(Prod);	
	}else{
		cout<<"Tas Penuh"<<endl;
	}
}
void Player::addProduct(string Prod) //Menambahkan Nama Product Prod ke Bag dan ditaruh di paling belakang
{
	if (Prod=="ButtermilkChicken"){
		ButtermilkChicken X;	
		this->addProduct(X);
	} else if (Prod=="Omellete"){
		Omellete X;	
		this->addProduct(X);
	} else if (Prod=="Meatball"){
		Meatball X;	
		this->addProduct(X);
	} else if (Prod=="ChickenEgg"){
		ChickenEgg X;	
		this->addProduct(X);
	} else if (Prod=="ChickenMeat"){
		ChickenMeat X;	
		this->addProduct(X);
	} else if (Prod=="CowMeat"){
		CowMeat X;	
		this->addProduct(X);
	} else if (Prod=="CowMilk"){
		CowMilk X;	
		this->addProduct(X);
	} else if (Prod=="DuckEgg"){
		DuckEgg X;	
		this->addProduct(X);
	} else if (Prod=="HorseMilk"){
		HorseMilk X;	
		this->addProduct(X);
	} else if (Prod=="RabbitMeat"){
		RabbitMeat X;	
		this->addProduct(X);
	};
}
void Player::addWater() //Mengisi gebor dengan air secara maksimal (sesuai kapasitas) dengan mengubah atribut water 
{
	water=MAXWATER;
}
void Player::addMoney(int harga) //Menambah atribut money sesuai dengan harga
{
	money+=harga;
}
bool Player::isValid(int x,int y) //Mengecek Posisi tersebut ditempati player atau tidak mengembalikan true jika posisi tersebut ditempati player
{
	return (this->getX()==x&&this->getY()==y);
}
void Player::print() //menulis inventori
{
	cout<<"Money	: "<<this->getMoney()<<endl;	
	cout<<"Water	: "<<this->getWater()<<endl;
	cout<<"bag	: ";
	for(int i=1;i<=this->getSizeBag();i++){
		cout<<this->getBag(i).getNama();
		if(i!=this->getSizeBag()){
			cout<<", ";
		}else{
			cout<<endl;
		}
	}
}
