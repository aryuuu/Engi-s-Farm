/**
  * @file MeatProducingAnimal.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class MeatProducingAnimal
  * @version 1
  * @date 2019-03-18
  */

#include "../Animal.hpp"

#ifndef _MEAT_PRODUCING_ANIMAL_HPP
#define _MEAT_PRODUCING_ANIMAL_HPP

/** Class berisi setiap animal yang dapat menghasilkan daging */
class MeatProducingAnimal: virtual public Animal
{
private:
  // tidak ada atribut
public:
  /** Konstruktor */
  MeatProducingAnimal (Position p);
  /** mengeset canBeKilled menjadi true */
  bool canBeKilled() const;
};

#endif
