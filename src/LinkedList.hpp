/**
  * @file LinkedList.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class LinkedList
  * @version 1
  * @date 2019-03-19
  */
#include <iostream>
#include "Node.hpp"

#ifndef _LINKED_LIST
#define _LINKED_LIST

template <class T>
/** Class LinkedList mendefinisikan tipe LinkedList;
  * Memiliki atribut length yaitu panjang list dan head yang merupakan alamat indeks awal list;
  * Memiliki method untuk memanipulasi list; */
class LinkedList{
public:
    // Atribut
    int length; // Panjang list
    Node<T> *head; // Alamat indeks awal List

    // Getter-setter
    int getLength();

    // Method
    LinkedList<T>(); // ctor
    ~LinkedList<T>(); // dtor -> menghapus semua linkedlist dan node-node di dalamnya

    int find(T element) const; //Mengembalikan indeks dimana elemen ditemukan, -1 jika tidak ada
	  bool isEmpty() const; //Mengembalikan True jika linked list kosong
	  void add(T element); //Menambahkan elemen sebagai elemen paling akhir
	  void remove(T element); //Membuang elemen dari linked list
	  T getElmt(int indeks) const; //Mengembalikan elemen pada indeks
    void setElmt(T data, int indeks);
};


template <class T>
LinkedList<T>::LinkedList(){
    this->length = 0;
    this->head = nullptr;
}


template <class T>
LinkedList<T>::~LinkedList() {
  Node<T> *currTarget = head;
  Node<T> *prevTarget;
  for (int i = 0; i < (length - 1); i++)
  {
    prevTarget = currTarget;
    currTarget = currTarget->getNext();
    delete prevTarget;
  }
}

template <class T>
int LinkedList<T>::find(T element) const{
	Node<T> *itr = head;
	bool found = false;
	int posisi = 1;
	while(itr != nullptr && not(found)){
		if (itr->getData() == element){
			found = true;
		} else {
			itr = itr->getNext();
			posisi++;
		}
	}
	if (posisi > this->length) {
		posisi=-1;
	}
	return posisi;
}

template <class T>
bool LinkedList<T>::isEmpty() const{
	return (length==0);
}

template <class T>
void LinkedList<T>::add(T element){
  Node<T> *node = new Node<T>(element);
  Node<T> *itr = head;

	if (head != nullptr){
    while (itr->getNext() != nullptr){
    	itr = itr->getNext();
  	}
    itr->setNext(node);
	} else {
		head = node;
	}
  this->length++;
}

template <class T>
void LinkedList<T>::remove(T element) {
	Node<T> *itr = head;
	Node<T> *prev = nullptr;
	int pos = find(element);

	while (--pos > 0){
		prev = itr;
		itr = itr->getNext();
	}

	element = itr->getData();
	if (itr == this->head){
		this->head = itr->getNext();
    itr->setNext(nullptr);
	} else {
		prev->setNext(itr->getNext());
	}
	delete itr;
  this->length--;
}

template <class T>
T LinkedList<T>::getElmt(int indeks) const{
  int counter = indeks;
	Node<T> *itr = head;
	while(counter > 1){
		itr = itr->getNext();
    counter--;
	}
	return itr->getData();
}

#endif
