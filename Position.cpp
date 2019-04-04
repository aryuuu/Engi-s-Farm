#include "Position.hpp"
#include <iostream>
using namespace std;

// ctor
/** Membuat sebuah posisi dengan x = 0 dan y = 0 */
Position::Position()
{
  x = 0;
  y = 0;
}
/** Membuat sebuah posisi dengam x = a dan y = b */
Position::Position(int a, int b)
{
  x = a;
  y = b;
}

/** mengembalikan nilai x*/
int Position::getAbsis()
{
  return x;
}
/** mengembalikan nilai y*/
int Position::getOrdinat()
{
  return y;
}
/** set nilai x*/
void Position::setAbsis(int a)
{
  x = a;
}
/** set nilai y*/
void Position::setOrdinat(int b)
{
  y = b;
}

/** operator overloading ==, mengembalikan true jika x dan y adalah sama */
bool Position::operator== (const Position& p)
{
  return (this->x == p.x && this->y == p.y);
}
