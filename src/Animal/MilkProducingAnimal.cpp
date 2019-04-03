/**
  * @file MilkProducingAnimal.cpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class EggProducingAnimal
  * @version 1
  * @date 2019-03-18
  */

#include "MilkProducingAnimal.hpp"
#include <iostream>
using namespace std;

/** Konstruktor */
MilkProducingAnimal::MilkProducingAnimal (Position p): Animal(p)
{}

/** mengeset canBeInteracted menjadi true */
bool MilkProducingAnimal::canBeInteracted() const
{
  return true;
}
