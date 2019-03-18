#include "MilkProducingAnimal.hpp"

#ifndef _HORSE_HPP
#define _HORSE_HPP

// Class chicken mendefinisikan tipe horse
// Memiliki habitat di Grassland
// Jika di-interact : HorseMilk
// Jika di-kill : tidak ada
class Horse: public MilkProducingAnimal
{
private:
  const std::string name = "Horse";             // atribut nama dari binatang ini
  const std::string habitat = "Grassland";      // atribut habitat dari Horse

public:
  Horse(Position p);                          // konstruktor dari tipe horse

  bool canMoveTo(Position, Farm);  // mengembalikan true jika horse bisa move ke position di dalam Farm

  std::string getHabitat() const;         // mengembalikan habitat dari horse (Grassland)
  std::string animalType() const;         // mengembalikan tipe animal (Horse)
  std::string sound() const;              // menentukan suara dari animal ini
  std::string interactProduct() const;    // menentukan produk interaksi
};

#endif
