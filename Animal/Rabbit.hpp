#include "MeatProducingAnimal.hpp"

#ifndef _RABBIT_HPP
#define _RABBIT_HPP

class MeatProducingAnimal: public MeatProducingAnimal
{
private:

public:
  std::string sound();              // menentukan suara dari animal ini
  std::string killProduct();        // menentukan produk hasil kill
};

#endif
