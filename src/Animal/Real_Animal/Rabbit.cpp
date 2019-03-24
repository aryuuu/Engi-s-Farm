#include "Rabbit.hpp"
#include <iostream>
using namespace std;

/** Konstruktor tipe khusus animal ini */
Rabbit::Rabbit(Position p): MeatProducingAnimal(p)
{}

/** mengembalikan habitat tempat hidup kelinci */
std::string Rabbit::getHabitat() const
{
  return habitat;
}
/** mengembalikan tipe animal (Rabbit) */
std::string Rabbit::animalType() const
{
  return name;
}
/** menentukan suara dari animal ini */
std::string Rabbit::sound() const
{
  return "KrrKrr?";
}
/** menentukan produk interaksi */
std::string Rabbit::killProduct()
{
  return "RabbitMeat";
}
