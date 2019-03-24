#include "Goat.hpp"
#include <iostream>
using namespace std;

/** Konstruktor tipe khusus animal ini */
Goat::Goat(Position p): Animal(p)
{}

/** mengembalikan habitat tempat hidup kambing */
std::string Goat::getHabitat() const
{
  return habitat;
}
/** mengembalikan tipe animal (Goat) */
std::string Goat::animalType() const
{
  return name;
}
/** menentukan suara dari animal ini */
std::string Goat::sound() const
{
  return "Mbeeeek";
}
