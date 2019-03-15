#ifndef _LINKEDLIST_HPP
#define _LINKEDLIST_HPP
#define Nil nullptr

template <class T>
class LinkedList
{
private:
  T elmt;
  LinkedList* next;
public:
  // 4 sekawan tidak semua diimplementasikan
  // ctor parameter
  //membuat elemen linked list dengan next = Nil
  LinkedList<T> (T);
  // dtor -> hapus pointer
  ~LinkedList<T> ();

  // getter-setter
  T getElmt();
  LinkedList* getNext();
  void setElmt(T);
  void setNext(LinkedList*);

  // fungsi-fungsi dari LinkedList
  bool isEmpty();
  int find(T);
  void add(T);
  void remove(T);
}
#endif

// 4 sekawan tidak semua diimplementasikan
// ctor parameter
//membuat elemen linked list dengan next = Nil
LinkedList<T>::LinkedList(T _elmt) {
  elmt = _elmt;
  next = Nil;
}

LinkedList<T>::~LinkedList() {
  delete next;
}
