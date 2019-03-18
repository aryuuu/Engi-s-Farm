#include "MeatProducingAnimal.hpp"

#ifndef _RABBIT_HPP
#define _RABBIT_HPP

// Class chicken mendefinisikan tipe rabbit
// Memiliki habitat di Grassland
// Jika di-interact : tidak ada
// Jika di-kill : RabbitMeat

class Rabbit: public MeatProducingAnimal
{
private:
  const std::string name = "Rabbit";
  const std::string habitat = "Grassland";

public:
  Rabbit(Position p);               // konstruktor dari tipe rabbit

  bool canMoveTo(Position, Farm) const;  // mengembalikan true jika rabbit bisa move ke position di dalam Farm

  std::string getHabitat() const;         // mengembalikan habitat dari rabbit (Grassland)
  std::string animalType() const;         // mengembalikan tipe animal (Rabbit)
  std::string sound() const;              // menentukan suara dari animal ini
  std::string killProduct() const;        // menentukan produk hasil kill
};

#endif
