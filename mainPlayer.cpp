#include <iostream>
#include "Player.cpp"
#include "HorseMilk.cpp"
#include "ChickenEgg.cpp"
using namespace std;
int main(){
	Player play;
	cout<<"Kondisi Awal		:"<<play.getWater()<<" "<<play.getMoney()<<" "<<play.getX()<<" "<<play.getY()<<endl;
	play.setWater(10);
	play.setMoney(1000);
	play.setX(5);
	play.setY(5);
	cout<<"Cek Set dan Get		:"<<play.getWater()<<" "<<play.getMoney()<<" "<<play.getX()<<" "<<play.getY()<<endl;
	play.addMoney(1000);
	cout<<"Cek Add Money		:"<<play.getMoney()<<endl;
	play.addWater();
	cout<<"Cek Add Water		:"<<play.getWater()<<endl;
	play.reduceWater();
	cout<<"Cek reduce Water	:"<<play.getWater()<<endl;
	play.playerMove('l');
	cout<<"Cek player Move l	:"<<play.getX()<<","<<play.getY()<<endl;
	play.playerMove('r');
	cout<<"Cek player Move r	:"<<play.getX()<<","<<play.getY()<<endl;
	play.playerMove('u');
	cout<<"Cek player Move u	:"<<play.getX()<<","<<play.getY()<<endl;
	play.playerMove('d');
	cout<<"Cek player Move d	:"<<play.getX()<<","<<play.getY()<<endl;
	HorseMilk H;
	ChickenEgg C;
	play.addProduct(H);
	play.addProduct(C);
	cout<<"Nama Product Bag 1	:"<<play.getBag(1).getNama()<<"	Harga Product Bag 1	:"<<play.getBag(1).getHarga()<<endl;
	cout<<"Nama Product Bag 2	:"<<play.getBag(2).getNama()<<"	Harga Product Bag 2	:"<<play.getBag(2).getHarga()<<endl;
	play.delProduct("HorseMilk");
	cout<<"HorseMilk dihapus"<<endl;
	cout<<"Nama Product Bag 1	:"<<play.getBag(1).getNama()<<"	Harga Product Bag 1	:"<<play.getBag(1).getHarga()<<endl;
	play.addProduct(H);
	play.addProduct(C);
	play.addProduct(C);
	cout<<"Ukuran isi Tas		:"<<play.getSizeBag()<<endl;
	play.setBag(1,H); //menghapus produk pada indeks 1 lalu menambahkan produk HorseMilk
	for(int i=1;i<=play.getSizeBag();i++){
		cout<<"Nama Product Bag "<<i<<"	:"<<play.getBag(i).getNama()<<"	Harga Product Bag "<<i<<"	:"<<play.getBag(i).getHarga()<<endl;
	}
	
}
