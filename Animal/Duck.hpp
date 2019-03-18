#include "EggProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"

#ifndef _DUCK_HPP
#define _DUCK_HPP

class Duck: public EggProducingAnimal, public MeatProducingAnimal
{
private:
  const std::string habitat = "Coop";

public:
  bool canMoveTo(Position, Farm);  // mengembalikan true jika duck bisa move ke position di dalam Farm
  std::string sound();              // menentukan suara dari animal ini
  std::string interactProduct();    // menentukan produk interaksi
  std::string killProduct();        // menentukan produk hasil kill
};

#endif
