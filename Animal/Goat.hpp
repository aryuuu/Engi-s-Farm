#include "MeatProducingAnimal.hpp"
#include "MilkProducingAnimal.hpp"

#ifndef _GOAT_HPP
#define _GOAT_HPP

class Goat: public MeatProducingAnimal, public MilkProducingAnimal
{
private:
  const std::string habitat = "Barn";

public:
  bool canMoveTo(Position, Farm);  // mengembalikan true jika goat bisa move ke position di dalam Farm
  std::string sound();              // menentukan suara dari animal ini
  std::string interactProduct();    // menentukan produk interaksi
  std::string killProduct();        // menentukan produk hasil kill
};

#endif
