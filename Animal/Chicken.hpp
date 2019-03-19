/**
  * @file Chicken.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Chicken
  * @version 1
  * @date 2019-03-18
  */

#include "EggProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"

#ifndef _CHICKEN_HPP
#define _CHICKEN_HPP

/**
  * Class chicken mendefinisikan tipe ayam;
  * Memiliki habitat di Coop;
  * Jika di-interact : menghasilkan ChickenEgg;
  * Jika di-kill : menghasilkan ChickenMeat
  */
class Chicken: public EggProducingAnimal, public MeatProducingAnimal
{
private:
  /* mendefinisikan tipe ayam */
  const std::string name = "Chicken";
  /* mendefinisikan tempat hidup ayam */
  const std::string habitat = "Coop";

public:
  /** Konstruktor tipe khusus animal ini */
  Chicken(Position p);

  /** mengembalikan habitat tempat hidup ayam */
  std::string getHabitat() const;
  /** mengembalikan tipe animal (Chicken) */
  std::string animalType() const;
  /** menentukan suara dari animal ini */
  std::string sound() const;
  /** menentukan produk interaksi */
  std::string interactProduct() const;
  /** menentukan produk hasil kill */
  std::string killProduct() const;
};

#endif
