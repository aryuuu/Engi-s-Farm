#include "Animal.hpp"
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

/** ctor
  * konstruktor kelas binatang yang menentukan lokasi binatang tersebut
  * set posisi dengan p, notEatenC ke 0, dan hungry ke false */
Animal::Animal(Position p)
{
  loc = p;
  notEatenC = 0;
  hasEaten = false;
}

// getter-setter
/** mengembalikan posisi dari binatang */
Position Animal::getLocation() const
{
  return loc;
}
/** mengembalikan nilai dari notEatenC */
int Animal::getNotEatenC() const
{
  return notEatenC;
}
/** mengembalikan nilai boolean hungry */
bool Animal::getHasEaten() const
{
  return hasEaten;
}
/** mengeset posisi dari animal tersebut */
void Animal::setLocation(Position p)
{
  loc = p;
}
/** mengeset nilai notEatenC dari animal tersebut */
void Animal::setNotEatenC(int p)
{
  notEatenC = p;
}
/** mengeset binatang menjadi sudah pernah makan */
void Animal::setHasEaten(bool eaten)
{
  hasEaten = eaten;
}

// fungsi-fungsi lain
/** mengeset nilai dari notEatenC = 0 */
void Animal::animalHasEaten()
{
  notEatenC = 0;
  hasEaten = true;
}
/** menambahkan nilai dari notEatenC */
void Animal::hungrier()
{
  notEatenC++;
}
/** menandakan kalau animal tersebut telah lapar (counter melebihi 10) */
bool Animal::isHungry() const
{
  return notEatenC >= hungryNotEatenC;
}
/** menandakan kalau animal tersebut layak mati (terlalu lama tidak makan) */
bool Animal::isDead() const
{
  return notEatenC >= maxNotEatenC;
}
/** memberi nilai true jika berada di posisi p */
bool Animal::isPosition(Position p) const
{
  return p == loc;
}
/** memberi nilai true jika berada di dekat posisi p */
bool Animal::isNear(Position p) const
{
  int px = p.getAbsis();
  int py = p.getOrdinat();
  int px2 = getLocation().getAbsis();
  int py2 = getLocation().getOrdinat();
  bool found = false;

  if (px == px2 && abs(py - py2) == 1)
  {
    found = true;
  }
  else if(py == py2 && abs(px - px2) == 1)
  {
    found = true;
  }
  return found;
}

/** memberikan posisi random (atas, bawah, kiri, atau kanan) dari binatang tersebut */
Position Animal::randomMove()
{
  int x = loc.getAbsis();
  int y = loc.getOrdinat();

  srand(time(0));
  int randInt = rand() % 4 + 1;

  if (randInt == 1)
  {
    x--;
  }
  else if (randInt == 2)
  {
    x++;
  }
  else if (randInt == 3)
  {
    y--;
  }
  else if (randInt == 4)
  {
    y++;
  }
  return (Position(x, y));
}

/** mengembalikan true jika animal bisa move ke position di dalam Farm */
bool Animal::canBeInteracted() const
{
  return false;
}
/** mengembalikan nilai false sebelum dioverride oleh killProduct anaknya */
bool Animal::canBeKilled() const
{
  return false;
}

/** mengembalikan hasil dari interact dengan animal, awalnya "" */
std::string Animal::interactProduct()
{
  return "None";
}
/** mengembalikan hasil dari kill animal, awalnya "" */
std::string Animal::killProduct()
{
  return "None";
}
