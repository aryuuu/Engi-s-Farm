/**
  * @file Goat.cpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Chicken
  * @version 1
  * @date 2019-04-04
  */

#include "Goat.hpp"
#include <iostream>
using namespace std;

/** Konstruktor tipe khusus animal ini */
Goat::Goat(Position p): Animal(p)
{}

/** mengembalikan habitat tempat hidup kambing */
std::string Goat::getHabitat() const
{
  return habitat;
}
/** mengembalikan tipe animal (Goat) */
std::string Goat::animalType() const
{
  return name;
}
/** menentukan suara dari animal ini */
std::string Goat::sound() const
{
  return "Mbeeeek";
}
