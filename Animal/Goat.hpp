#include "Animal.hpp"

#ifndef _GOAT_HPP
#define _GOAT_HPP

// Class chicken mendefinisikan tipe goat
// Memiliki habitat di Barn
// Jika di-interact : tidak ada
// Jika di-kill : tidak ada
class Goat: public Animal
{
private:
  const std::string name = "Goat";    // mendefinisikan tipe goat
  const std::string habitat = "Barn"; // mendefinisikan habitat dari goat

public:
  Goat(Position p);                           // konstruktor dari tipe animal ini

  bool canMoveTo(Position, Farm) const;  // mengembalikan true jika goat bisa move ke position di dalam Farm

  std::string getHabitat() const;         // mengembalikan habitat dari kambing (Barn)
  std::string animalType() const;         // mengembalikan tipe animal (Goat)
  std::string sound() const;              // menentukan suara dari animal ini
};

#endif
