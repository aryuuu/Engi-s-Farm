/**
  * @file EggProducingAnimal.cpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class EggProducingAnimal
  * @version 1
  * @date 2019-03-18
  */

#include "EggProducingAnimal.hpp"
#include <iostream>
using namespace std;

/** Konstruktor */
EggProducingAnimal::EggProducingAnimal (Position p) : Animal(p)
{}

/** mengeset canBeInteracted menjadi true */
bool EggProducingAnimal::canBeInteracted() const
{
  return true;
}
