/**
  * @file Duck.cpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Chicken
  * @version 1
  * @date 2019-04-04
  */

#include "Duck.hpp"
#include <iostream>
using namespace std;

/** Konstruktor tipe khusus animal ini */
Duck::Duck(Position p): Animal(p), EggProducingAnimal(p)
{}

/** mengembalikan habitat tempat hidup bebek */
std::string Duck::getHabitat() const
{
  return habitat;
}
/** mengembalikan tipe animal (Duck) */
std::string Duck::animalType() const
{
  return name;
}
/** menentukan suara dari animal ini */
std::string Duck::sound() const
{
  return "KwekKwek";
}
/** menentukan produk interaksi */
std::string Duck::interactProduct()
{
  return "DuckEgg";
}
/** menuliskan lambang dari animal tersebut ke dalam tile */
void Duck::printTile()
{
  if (getHasEaten())
  {
    cout << "D";
  }
  else
  {
    cout << "d";
  }
}
