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
