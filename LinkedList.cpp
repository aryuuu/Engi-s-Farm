#include <iostream>
#include <cstdlib>
using namespace std;
template <class T>
class Node{
public:
    Node* next;
    T data;
};

template <class T>
class LinkedList{
public:
    int length;
    Node* head;

    LinkedList();
    int find(T element) const //Mengembalikan indeks dimana elemen ditemukan, -1 jika tidak ada
	bool isEmpty() const //Mengembalikan True jika linked list kosong
	void add(T element) //Menambahkan elemen sebagai elemen paling akhir
	void remove(T element) //Membuang elemen dari linked list
	T get(int indeks) const //Mengembalikan elemen pada indeks
};
LinkedList::LinkedList(){
    this->length = 0;
    this->head = NULL;
}
template <class T>
int LinkedList::find(T element) const{
	Node* itr = head;
	bool found = false;
	int posisi=1;
	while(itr!=NULL && not(found)){
		if (itr->data==element){
			found = true;
		}else{
			itr=itr->next;
			posisi++;
		}
	}
	if (posisi>this->length){
		posisi=-1;
	}
	return posisi;
}
template <class T>
bool LinkedList::isEmpty() const{
	return (length==0);
}
template <class T>
void LinkedList::add(T element){
    Node* node = new Node();
    Node* itr = head;
	node->data = element;
	if (head!=NULL){
	    while (itr->next!=NULL){
	    	itr=itr->next;
		}
		itr->next = node;
	}else{
		head=node;
	}
    node->next = NULL;
    this->length++;
}
template <class T>
void LinkedList::remove(T element) {
	Node* itr = head;
	pos=find(T element);
	while (--pos>0){
		itr=itr->next;
	}
	if (itr==this->head){
		this->head=itr->next;
		itr->next=NULL;
	}else{
		
	}
}
template <class T>
T LinkedList::get(int indeks) const{
	Node* itr = head;
	while(--indeks){
		itr=itr->next;
	}
	return itr->data;
}
