/**
  * @file Duck.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Duck
  * @version 1
  * @date 2019-03-18
  */

#include "EggProducingAnimal.hpp"

#ifndef _DUCK_HPP
#define _DUCK_HPP

/** Class chicken mendefinisikan tipe bebek;
  * Memiliki habitat di Coop;
  * Jika di-interact : menghasilkan DuckEgg;
  * Jika di-kill : tidak ada */
class Duck: public EggProducingAnimal
{
private:
  const std::string name = "Duck";    // mendefinisikan tipe duck
  const std::string habitat = "Coop"; // mendefinsikan habitat dari bebek

public:
  /** konstruktor dari tipe animal ini */
  Duck(Position p);

   /** mengembalikan true jika duck bisa move ke position di dalam Farm*/
  bool canMoveTo(Position, Farm) const;

  /** mengembalikan habitat dari bebek (Coop)*/
  std::string getHabitat() const;
  /** mengembalikan tipe animal (Duck)*/
  std::string animalType() const;
  /** menentukan suara dari animal ini*/
  std::string sound() const;
  /** menentukan produk interaksi*/          
  std::string interactProduct() const;
};

#endif
