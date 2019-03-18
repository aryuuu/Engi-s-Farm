#include "MeatProducingAnimal.hpp"

#ifndef _RABBIT_HPP
#define _RABBIT_HPP

class Rabbit: public MeatProducingAnimal
{
private:
  const std::string habitat = "Grassland";

public:
  bool canMoveTo(Position, Farm);  // mengembalikan true jika rabbit bisa move ke position di dalam Farm
  std::string sound();              // menentukan suara dari animal ini
  std::string killProduct();        // menentukan produk hasil kill
};

#endif
