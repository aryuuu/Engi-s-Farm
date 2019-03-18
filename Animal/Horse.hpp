#include "MilkProducingAnimal.hpp"

#ifndef _HORSE_HPP
#define _HORSE_HPP

class Horse: public MilkProducingAnimal
{
private:
  const std::string habitat = "Grassland";

public:
  bool canMoveTo(Position, Farm);  // mengembalikan true jika horse bisa move ke position di dalam Farm
  std::string sound();              // menentukan suara dari animal ini
  std::string interactProduct();    // menentukan produk interaksi
};

#endif
