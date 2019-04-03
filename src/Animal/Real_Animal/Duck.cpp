#include "Duck.hpp"
#include <iostream>
using namespace std;

/** Konstruktor tipe khusus animal ini */
Duck::Duck(Position p): EggProducingAnimal(p)
{}

/** mengembalikan habitat tempat hidup bebek */
std::string Duck::getHabitat() const
{
  return habitat;
}
/** mengembalikan tipe animal (Duck) */
std::string Duck::animalType() const
{
  return name;
}
/** menentukan suara dari animal ini */
std::string Duck::sound() const
{
  return "KwekKwek";
}
/** menentukan produk interaksi */
std::string Duck::interactProduct()
{
  return "DuckEgg";
}