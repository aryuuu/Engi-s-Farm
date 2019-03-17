#include "EggProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"

#ifndef _CHICKEN_HPP
#define _CHICKEN_HPP

class Chicken: public EggProducingAnimal, public MeatProducingAnimal
{
private:

public:
  std::string sound();              // menentukan suara dari animal ini
  std::string interactProduct();    // menentukan produk interaksi
  std::string killProduct();        // menentukan produk hasil kill
};

#endif
