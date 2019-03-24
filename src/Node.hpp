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
public:
    Node* next;	// posisi node selanjutnya
    T data;	// Isi dari node
};
#endif
