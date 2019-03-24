/**
  * @file MilkProducingAnimal.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class MilkProducingAnimal
  * @version 1
  * @date 2019-03-18
  */

#include "../Animal.hpp"

#ifndef _MILK_PRODUCING_ANIMAL_HPP
#define _MILK_PRODUCING_ANIMAL_HPP

/** Class berisi setiap animal yang dapat menghasilkan susu */
class MilkProducingAnimal: public Animal
{
private:
  // tidak ada atribut
public:
  /** Konstruktor */
  MilkProducingAnimal (Position p);
  /** mengeset canBeInteracted menjadi true */
  bool canBeInteracted() const;
};

#endif
