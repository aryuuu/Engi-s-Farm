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
