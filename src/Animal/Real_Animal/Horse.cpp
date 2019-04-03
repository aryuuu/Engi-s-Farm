/**
  * @file Horse.cpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Chicken
  * @version 1
  * @date 2019-04-04
  */

#include "Horse.hpp"
#include <iostream>
using namespace std;

/** Konstruktor tipe khusus animal ini */
Horse::Horse(Position p): Animal(p), MilkProducingAnimal(p)
{}

/** mengembalikan habitat tempat hidup kuda */
std::string Horse::getHabitat() const
{
  return habitat;
}
/** mengembalikan tipe animal (Horse) */
std::string Horse::animalType() const
{
  return name;
}
/** menentukan suara dari animal ini */
std::string Horse::sound() const
{
  return "Meeeeeehh";
}
/** menentukan produk interaksi */
std::string Horse::interactProduct()
{
  return "HorseMilk";
}
