/**
  * @file Cow.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Cow
  * @version 1
  * @date 2019-03-18
  */

#include "MeatProducingAnimal.hpp"
#include "MilkProducingAnimal.hpp"

#ifndef _COW_HPP
#define _COW_HPP

/** Class chicken mendefinisikan tipe sapi;
  * Memiliki habitat di Barn;
  * Jika di-interact : menghasilkan CowMilk;
  * Jika di-kill : menghasilkan CowMeat */
class Cow: public MeatProducingAnimal, public MilkProducingAnimal
{
private:
  const std::string name = "Cow";     // mendefinsiikan tipe sapi
  const std::string habitat = "Barn"; // mendefinisikan tempat hidup sapi

public:
  /** Konstruktor tipe khusus animal ini */
  Cow(Position p);

  /** mengembalikan true jika cow bisa move ke position di dalam Farm */
  bool canMoveTo(Position, Farm) const;

  /** mengembalikan habitat dari sapi (Barn) */
  std::string getHabitat() const;
  /** mengembalikan tipe animal (Cow) */
  std::string animalType() const;
  /** menentukan suara dari animal ini */
  std::string sound() const;
  /** menentukan produk interaksi */
  std::string interactProduct() const;
  /** menentukan produk hasil kill */ 
  std::string killProduct() const;
};

#endif
