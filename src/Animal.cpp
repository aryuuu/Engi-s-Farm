#include "Animal.hpp"
#include <iostream>
using namespace std;

/** ctor
  * konstruktor kelas binatang yang menentukan lokasi binatang tersebut
  * set posisi dengan p, notEatenC ke 0, dan hungry ke false */
Animal::Animal(Position p)
{
  loc = p;
  notEatenC = 0;
  hungry = false;
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
bool Animal::getHungry() const
{
  return hungry;
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
/** mengeset binatang menjadi lapar */
void Animal::setHungry()
{
  hungry = true;
}
/** mengeset binatang menjadi kenyang */
void Animal::setFull()
{
  hungry = false;
}

// fungsi-fungsi lain
/** mengeset nilai dari notEatenC = 0 */
void Animal::hasEaten()
{
  notEatenC = 0;
  hungry = false;
}
/** menambahkan nilai dari notEatenC */
void Animal::hungrier()
{
  notEatenC++;
  if (notEatenC >= hungryNotEatenC)
  {
    hungry = true;
  }
}
/** menandakan kalau animal tersebut layak mati (terlalu lama tidak makan) */
bool Animal::isDead() const
{
  return hungry == maxNotEatenC;
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
  return true;
}

/** memberikan posisi random (atas, bawah, kiri, atau kanan) dari binatang tersebut */
Position Animal::randomMove()
{
  int x = loc.getAbsis();
  int y = loc.getOrdinat();
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
  return "";
}
/** mengembalikan hasil dari kill animal, awalnya "" */
std::string Animal::killProduct()
{
  return "";
}
