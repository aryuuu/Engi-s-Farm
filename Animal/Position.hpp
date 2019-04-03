/**
  * @file Position.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Position
  * @version 1
  * @date 2019-03-18
  */

#ifndef _POSITION_HPP
#define _POSITION_HPP

/** Class yang berisi posisi (X dan Y) dari sebuah benda */
class Position {
private:
  int x;        // mengembalikan absis dari posisi
  int y;        // mengembalikan ordinat dari posisi
public:
  // ctor
  /** Membuat sebuah posisi dengam x = a dan y = b */
  Position(int a, int b);

  /** mengembalikan nilai x*/
  int getAbsis();
  /** mengembalikan nilai y*/
  int getOrdinat();
  /** set nilai x*/
  void setAbsis(int);
  /** set nilai y*/       
  void setOrdinat(int);
};

#endif
