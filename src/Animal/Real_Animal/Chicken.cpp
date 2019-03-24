#include "Chicken.hpp"
#include <iostream>
using namespace std;

/** Konstruktor tipe khusus animal ini */
Chicken::Chicken(Position p): EggProducingAnimal(p), MeatProducingAnimal(p)
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
