#include "Animal.hpp"

#ifndef _EGG_PRODUCING_ANIMAL_HPP
#define _EGG_PRODUCING_ANIMAL_HPP

class EggProducingAnimal: public Animal
{
private:
  // tidak ada atribut
public:
  bool canBeInteracted();               // mengeset canBeInteracted menjadi true
};

#endif
