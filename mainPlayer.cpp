#include <iostream>
#include "Player.cpp"

using namespace std;
int main(){
	Player play();
	cout<<getWater()<<" "<<getMoney()<<" "<<getX()<<" "<<getY()<<endl;
	play.setWater(10);
	setMoney(1000);
	play.setX(5);
	play.setY(5);
	cout<<"Cek Set dan Get	:"<<getWater()<<" "<<getMoney()<<" "<<getX()<<" "<<getY()<<endl;
	play.addMoney(1000);
	cout<<"Cek Add Money	:"<<getMoney()<<endl;
	play.addWater();
	cout<<"Cek Add Water	:"<<getWater()<<endl;
	play.reduceWater()
	cout<<"Cek Add Water	:"<<getWater()<<endl;
	play.playerMove("l");
	cout<<"Cek player Move	:"<<getX()<<","<<getY()<<endl;
	play.playerMove("r");
	cout<<"Cek player Move	:"<<getX()<<","<<getY()<<endl;
	play.playerMove("u");
	cout<<"Cek player Move	:"<<getX()<<","<<getY()<<endl;
	play.playerMove("d");
	cout<<"Cek player Move	:"<<getX()<<","<<getY()<<endl;
	play.addProduct(Prod);
}
