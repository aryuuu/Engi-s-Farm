/**
  * @file Rabbit.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Rabbit
  * @version 1
  * @date 2019-03-18
  */

#include "MeatProducingAnimal.hpp"

#ifndef _RABBIT_HPP
#define _RABBIT_HPP

/** Class chicken mendefinisikan tipe rabbit;
  * Memiliki habitat di Grassland;
  * Jika di-interact : tidak ada;
  * Jika di-kill : RabbitMeat */

class Rabbit: public MeatProducingAnimal
{
private:
  const std::string name = "Rabbit";          // menandakaan tipe dari animal
  const std::string habitat = "Grassland";    // menandakan habitat tempat hidup animal tersebut

public:
  /** konstruktor dari tipe rabbit */
  Rabbit(Position p);

  /** mengembalikan habitat dari rabbit (Grassland) */
  std::string getHabitat() const;
  /** mengembalikan tipe animal (Rabbit) */
  std::string animalType() const;
  /** menentukan suara dari animal ini */
  std::string sound() const;
  /** menentukan produk hasil kill */
  std::string killProduct() const;
};

#endif
