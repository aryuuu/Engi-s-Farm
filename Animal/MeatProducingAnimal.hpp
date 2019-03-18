#include "Animal.hpp"

#ifndef _MEAT_PRODUCING_ANIMAL_HPP
#define _MEAT_PRODUCING_ANIMAL_HPP

class MeatProducingAnimal: public Animal
{
private:
  // tidak ada atribut
public:
  bool canBeKilled();               // mengeset canBeKilled menjadi true
};

#endif
