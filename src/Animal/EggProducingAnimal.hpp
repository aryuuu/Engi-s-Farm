/**
  * @file EggProducingAnimal.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class EggProducingAnimal
  * @version 1
  * @date 2019-03-18
  */

#include "../Animal.hpp"

#ifndef _EGG_PRODUCING_ANIMAL_HPP
#define _EGG_PRODUCING_ANIMAL_HPP

/** Class berisi setiap animal yang dapat menghasilkan telur */
class EggProducingAnimal: public Animal
{
private:
  // tidak ada atribut
public:
  /** Konstruktor */
  EggProducingAnimal (Position p);
  /** mengeset canBeInteracted menjadi true */
  bool canBeInteracted() const;
};

#endif
