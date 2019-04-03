/**
  * @file Chicken.cpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Chicken
  * @version 1
  * @date 2019-04-04
  */

#include "Chicken.hpp"
#include <iostream>
using namespace std;

/** Konstruktor tipe khusus animal ini */
Chicken::Chicken(Position p): Animal(p), EggProducingAnimal(p), MeatProducingAnimal(p)
{}

/** mengembalikan habitat tempat hidup ayam */
std::string Chicken::getHabitat() const
{
  return habitat;
}
/** mengembalikan tipe animal (Chicken) */
std::string Chicken::animalType() const
{
  return name;
}
/** menentukan suara dari animal ini */
std::string Chicken::sound() const
{
  return "Kukuruyuk";
}
/** menentukan produk interaksi */
std::string Chicken::interactProduct()
{
  return "ChickenEgg";
}
/** menentukan produk hasil kill */
std::string Chicken::killProduct()
{
  return "ChckenMeat";
}
