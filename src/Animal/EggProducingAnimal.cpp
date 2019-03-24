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
