#include "EggProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"

#ifndef _CHICKEN_HPP
#define _CHICKEN_HPP

// Class chicken mendefinisikan tipe ayam
// Memiliki habitat di Coop
// Jika di-interact : menghasilkan ChickenEgg
// Jika di-kill : menghasilkan ChickenMeat
class Chicken: public EggProducingAnimal, public MeatProducingAnimal
{
private:
  const std::string name = "Chicken";   // mendefinisikan tipe ayam
  const std::string habitat = "Coop";   // mendefinisikan tempat hidup ayam

public:
  Chicken(Position p);                          // Konstruktor tipe khusus animal ini

  bool canMoveTo(Position, Farm) const;     // mengembalikan true jika chicken bisa move ke position di dalam Farm

  std::string getHabitat() const;           // mengembalikan habitat tempat hidup ayam
  std::string animalType() const;           // mengembalikan tipe animal (Chicken)
  std::string sound() const;                // menentukan suara dari animal ini
  std::string interactProduct() const;      // menentukan produk interaksi
  std::string killProduct() const;          // menentukan produk hasil kill
};

#endif
