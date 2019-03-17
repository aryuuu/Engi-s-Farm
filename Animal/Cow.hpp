#include "MeatProducingAnimal.hpp"
#include "MilkProducingAnimal.hpp"

#ifndef _COW_HPP
#define _COW_HPP

class Cow: public MeatProducingAnimal, public MilkProducingAnimal
{
private:

public:
  std::string sound();              // menentukan suara dari animal ini
  std::string interactProduct();    // menentukan produk interaksi
  std::string killProduct();        // menentukan produk hasil kill
};

#endif
