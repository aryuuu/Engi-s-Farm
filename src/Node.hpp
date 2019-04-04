/**
  * @file Node.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi atribut dari class Node
  * @version 1
  * @date 2019-03-19
  */
#ifndef _NODE_HPP
#define _NODE_HPP
template <class T>
/** Class Node mendefinisikan sebuah node dalam list;
  * Memiliki atribut data dan next; */
class Node{
private:
  Node* next;	// posisi node selanjutnya
  T data;	// Isi dari node
public:
  // contructor......
  Node<T>();
  Node<T>(T _data);
  Node<T>& operator=(const Node<T>&);
  ~Node<T>();

  // getter-setter
  T getData();
  Node<T>* getNext();
  void setData(T _data);
  void setNext(Node<T>* _next);
};

template <class T>
Node<T>::Node()
{
  data = nullptr;
  next = nullptr;
}

template <class T>
Node<T>::Node(T _data)
{
  next = nullptr;
  data = _data;
}

template <class T>
Node<T>& Node<T>::operator=(const Node<T>& target)
{
  data = target.getData();
  delete next;
  next = target.getNext();
}

template <class T>
Node<T>::~Node()
{
  delete next;
}

template <class T>
T Node<T>::getData()
{
  return data;
}

template <class T>
Node<T>* Node<T>::getNext()
{
  return next;
}

template <class T>
void Node<T>::setData(T _data)
{
  data = _data;
}

template <class T>
void Node<T>::setNext(Node<T>* _next)
{
  next = _next;
}

#endif
