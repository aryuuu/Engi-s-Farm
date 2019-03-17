#include "EggProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"

#ifndef _DUCK_HPP
#define _DUCK_HPP

class Duck: public EggProducingAnimal, public MeatProducingAnimal
{
private:

public:
  std::string sound();              // menentukan suara dari animal ini
  std::string interactProduct();    // menentukan produk interaksi
  std::string killProduct();        // menentukan produk hasil kill
};

#endif
