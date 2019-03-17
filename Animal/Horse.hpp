#include "MilkProducingAnimal.hpp"

#ifndef _HORSE_HPP
#define _HORSE_HPP

class Horse: public MilkProducingAnimal
{
private:

public:
  std::string sound();              // menentukan suara dari animal ini
  std::string interactProduct();    // menentukan produk interaksi
};

#endif
