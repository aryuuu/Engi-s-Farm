#ifndef _POSITION_HPP
#define _POSITION_HPP

class Position {
private:
  int x;        // mengembalikan absis dari posisi
  int y;        // mengembalikan ordinat dari posisi
public:
  // ctor
  Position(int a, int b);   // Membuat sebuah posisi dengam x = a dan y = b

  int getAbsis();           // mengembalikan nilai x
  int getOrdinat();         // mengembalikan nilai y
}
