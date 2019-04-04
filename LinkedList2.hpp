/**
  * @file LinkedList2.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class LinkedList2
  * @version 1
  * @date 2019-03-19
  */
#include <iostream>
#include "Node2.hpp"

#ifndef _LINKED_LIST2_HPP
#define _LINKED_LIST2_HPP

template <class T>
/** Class LinkedList2 mendefinisikan tipe LinkedList2;
  * Memiliki atribut length yaitu panjang list dan head yang merupakan alamat indeks awal list;
  * Memiliki method untuk memanipulasi list; */
class LinkedList2{
public:
    // Atribut
    int length; // Panjang list
    Node2<T> *head; // Alamat indeks awal List

    // Getter-setter
    int getLength();

    // Method
    LinkedList2<T>(); // ctor
    ~LinkedList2<T>(); // dtor -> menghapus semua LinkedList2 dan Node2-Node2 di dalamnya

    int find(T element) const; //Mengembalikan indeks dimana elemen ditemukan, -1 jika tidak ada
	  bool isEmpty() const; //Mengembalikan True jika linked list kosong
	  void add(T element); //Menambahkan elemen sebagai elemen paling akhir
	  void remove(T element); //Membuang elemen dari linked list
	  T getElmt(int indeks) const; //Mengembalikan elemen pada indeks
    void setElmt(T data, int indeks);
};


template <class T>
LinkedList2<T>::LinkedList2(){
    this->length = 0;
    this->head = nullptr;
}


template <class T>
LinkedList2<T>::~LinkedList2() {
  Node2<T> *currTarget = head;
  Node2<T> *prevTarget;
  for (int i = 0; i < (length - 1); i++)
  {
    prevTarget = currTarget;
    currTarget = currTarget->getNext();
    delete prevTarget;
  }
}

template <class T>
int LinkedList2<T>::find(T element) const{
	Node2<T> *itr = head;
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
bool LinkedList2<T>::isEmpty() const{
	return (length==0);
}

template <class T>
void LinkedList2<T>::add(T element){
  Node2<T> *node = new Node2<T>(element);
  Node2<T> *itr = head;

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
void LinkedList2<T>::remove(T element) {
	Node2<T> *itr = head;
	Node2<T> *prev = nullptr;
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
T LinkedList2<T>::getElmt(int indeks) const{
  int counter = indeks;
	Node2<T> *itr = head;
	while(counter > 1){
		itr = itr->getNext();
    counter--;
	}
	return itr->getData();
}

#endif
