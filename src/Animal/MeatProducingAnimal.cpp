/**
  * @file MeatProducingAnimal.cpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class EggProducingAnimal
  * @version 1
  * @date 2019-03-18
  */

#include "MeatProducingAnimal.hpp"
#include <iostream>
using namespace std;

/** Konstruktor */
MeatProducingAnimal::MeatProducingAnimal (Position p): Animal(p)
{}

/** mengeset canBeInteracted menjadi true */
bool MeatProducingAnimal::canBeKilled() const
{
  return true;
}
