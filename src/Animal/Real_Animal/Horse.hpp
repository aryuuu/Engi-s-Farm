/**
  * @file Horse.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Horse
  * @version 1
  * @date 2019-03-18
  */

#include "../MilkProducingAnimal.hpp"

#ifndef _HORSE_HPP
#define _HORSE_HPP

/** Class chicken mendefinisikan tipe horse
  * Memiliki habitat di Grassland
  * Jika di-interact : HorseMilk
  * Jika di-kill : tidak ada */
class Horse: public MilkProducingAnimal
{
private:
  const std::string name = "Horse";             // atribut nama dari binatang ini
  const std::string habitat = "Grassland";      // atribut habitat dari Horse

public:
  /** konstruktor dari tipe horse */
  Horse(Position p);

  /** mengembalikan habitat dari horse (Grassland) */
  std::string getHabitat() const;
  /** mengembalikan tipe animal (Horse) */
  std::string animalType() const;
  /** menentukan suara dari animal ini */
  std::string sound() const;
  /** menentukan produk interaksi */
  std::string interactProduct();
};

#endif
