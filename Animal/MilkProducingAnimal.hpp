#include "Animal.hpp"

#ifndef _MILK_PRODUCING_ANIMAL_HPP
#define _MILK_PRODUCING_ANIMAL_HPP

class MilkProducingAnimal: public Animal
{
private:
  // tidak ada atribut
public:
  bool canBeInteracted() const;               // mengeset canBeInteracted menjadi true
};

#endif
