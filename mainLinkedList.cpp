#include <iostream>
#include <cstdlib>
#include "LinkedList.hpp"
#include "position.cpp"
using namespace std;
int main(){
	int x,y;
	Position a(0,0);
	LinkedList<Position> A;
	cout<<"Cek apakah linkedlist kosong : "<<(A.isEmpty()?"Ya":"Tidak")<<endl;
	cout<<"Masukan nilai ke linkedlist :";cin>>x>>y; Position b(x,y);
	A.add(b);
	cout<<"Masukan nilai ke linkedlist :";cin>>x>>y; Position c(x,y);
	A.add(c);
	cout<<"Masukan nilai ke linkedlist :";cin>>x>>y; Position d(x,y);
	A.add(d);
	cout<<"Cek apakah linkedlist kosong : "<<(A.isEmpty()?"Ya":"Tidak")<<endl;
	cout<<"cari posisi di linkedlist :";cin>>x>>y;Position e(x,y);
	cout<<"Cek posisi : "<<A.find(e)<<endl;
	Position f=A.get(1);
	cout<<"Cek posisi pertama :"<<f.getAbsis()<<" "<<f.getOrdinat()<<endl;
	cout<<"Elemen yang dihapus :";
	cin>>x>>y; Position g(x,y);
	A.remove(g);
	Position h=A.get(1);
	cout<<"Cek posisi pertama :"<<h.getAbsis()<<" "<<h.getOrdinat()<<endl;
}
