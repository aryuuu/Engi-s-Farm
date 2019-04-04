/**
  * @file Goat.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Goat
  * @version 1
  * @date 2019-03-18
  */

#include "../../Animal.hpp"

#ifndef _GOAT_HPP
#define _GOAT_HPP

/** Class chicken mendefinisikan tipe goat;
  * Memiliki habitat di Barn;
  * Jika di-interact : tidak ada;
  * Jika di-kill : tidak ada */
class Goat: public Animal
{
private:
  const std::string name = "Goat";    // mendefinisikan tipe goat
  const std::string habitat = "Barn"; // mendefinisikan habitat dari goat

public:
  /** konstruktor dari tipe animal ini */
  Goat(Position p);

  /** mengembalikan habitat dari kambing (Barn) */
  std::string getHabitat() const;
  /** mengembalikan tipe animal (Goat) */
  std::string animalType() const;
  /** menentukan suara dari animal ini */
  std::string sound() const;
  /** menuliskan lambang dari animal tersebut ke dalam tile */
  void printTile();
};

#endif
