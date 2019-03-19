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
/** Class Player mendefinisikan tipe pemain;
  * Memiliki atribut data dan next; */	
class Node{
public:
    Node* next;
    T data;
};
#endif
