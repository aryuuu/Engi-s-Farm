/**
  * @file Node2.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi atribut dari class Node2
  * @version 1
  * @date 2019-03-19
  */
#ifndef _Node22_HPP
#define _Node22_HPP
template <class T>
/** Class Node2 mendefinisikan sebuah Node2 dalam list;
  * Memiliki atribut data dan next; */
class Node2{
private:
  Node2* next;	// posisi Node2 selanjutnya
  T data;	// Isi dari Node2
public:
  // contructor......
  Node2<T>();
  Node2<T>(T _data);
  Node2<T>& operator=(const Node2<T>&);
  ~Node2<T>();

  // getter-setter
  T getData();
  Node2<T>* getNext();
  void setData(T _data);
  void setNext(Node2<T>* _next);
};

template <class T>
Node2<T>::Node2()
{
  data = nullptr;
  next = nullptr;
}

template <class T>
Node2<T>::Node2(T _data)
{
  next = nullptr;
  data = _data;
}

template <class T>
Node2<T>& Node2<T>::operator=(const Node2<T>& target)
{
  data = target.getData();
  delete next;
  next = target.getNext();
}

template <class T>
Node2<T>::~Node2()
{
  delete next;
}

template <class T>
T Node2<T>::getData()
{
  return data;
}

template <class T>
Node2<T>* Node2<T>::getNext()
{
  return next;
}

template <class T>
void Node2<T>::setData(T _data)
{
  data = _data;
}

template <class T>
void Node2<T>::setNext(Node2<T>* _next)
{
  next = _next;
}

#endif
