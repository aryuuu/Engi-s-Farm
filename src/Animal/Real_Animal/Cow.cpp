#include "Cow.hpp"
#include <iostream>
using namespace std;

/** Konstruktor tipe khusus animal ini */
Cow::Cow(Position p): MeatProducingAnimal(p), MilkProducingAnimal(p)
{}

/** mengembalikan habitat tempat hidup sapi */
std::string Cow::getHabitat() const
{
  return habitat;
}
/** mengembalikan tipe animal (Cow) */
std::string Cow::animalType() const
{
  return name;
}
/** menentukan suara dari animal ini */
std::string Cow::sound() const
{
  return "Mooooo";
}
/** menentukan produk interaksi */
std::string Cow::interactProduct()
{
  return "CowMilk";
}
/** menentukan produk hasil kill */
std::string Cow::killProduct()
{
  return "ChckenMeat";
}
