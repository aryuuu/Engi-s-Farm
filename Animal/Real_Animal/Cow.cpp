/**
  * @file Cow.cpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Chicken
  * @version 1
  * @date 2019-04-04
  */

#include "Cow.hpp"
#include <iostream>
using namespace std;

/** Konstruktor tipe khusus animal ini */
Cow::Cow(Position p): Animal(p), MeatProducingAnimal(p), MilkProducingAnimal(p)
{}

/** mengembalikan habitat tempat hidup sapi */
std::string Cow::getHabitat() const
{
  return habitat;
}
/** mengembalikan tipe animal (Cow) */
std::string Cow::animalType() const
{
  return name;
}
/** menentukan suara dari animal ini */
std::string Cow::sound() const
{
  return "Mooooo";
}
/** menentukan produk interaksi */
std::string Cow::interactProduct()
{
  return "CowMilk";
}
/** menentukan produk hasil kill */
std::string Cow::killProduct()
{
  return "ChckenMeat";
}
/** menuliskan lambang dari animal tersebut ke dalam tile */
void Cow::printTile()
{
  if (getHasEaten())
  {
    cout << "C";
  }
  else
  {
    cout << "c";
  }
}
