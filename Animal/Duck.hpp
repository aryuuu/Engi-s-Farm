#include "EggProducingAnimal.hpp"

#ifndef _DUCK_HPP
#define _DUCK_HPP

// Class chicken mendefinisikan tipe bebek
// Memiliki habitat di Coop
// Jika di-interact : menghasilkan DuckEgg
// Jika di-kill : tidak ada
class Duck: public EggProducingAnimal
{
private:
  const std::string name = "Duck";    // mendefinisikan tipe duck
  const std::string habitat = "Coop"; // mendefinsikan habitat dari bebek

public:
  Duck(Position p);                           // konstruktor dari tipe animal ini

  bool canMoveTo(Position, Farm) const;  // mengembalikan true jika duck bisa move ke position di dalam Farm

  std::string getHabitat() const;         // mengembalikan habitat dari bebek (Coop)
  std::string animalType() const;         // mengembalikan tipe animal (Duck)
  std::string sound() const;              // menentukan suara dari animal ini
  std::string interactProduct() const;    // menentukan produk interaksi
};

#endif
