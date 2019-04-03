/**
  * @file Animal.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Animal
  * @version 1
  * @date 2019-03-18
  */

#include "Position.hpp"
#include <string>

#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP

/** Class Animal: ABC yang menggambarkan setiap animal yang terdapat dalam game */
class Animal
{
private:
  const int maxNotEatenC = 20;    // angka maksimum hewan tidak makan
  const int hungryNotEatenC = 10; // angka di mana hewan mulai kelaparan
  Position loc;               // mengembalikan posisi dari sebuah binatang
  int notEatenC;              // counter menghitung berapa turn terlewati setelah animal tidak makan
  bool hasEaten;              // menentukan apakah binatang telah makan atau tidak

public:
  /** ctor
    * konstruktor kelas binatang yang menentukan lokasi binatang tersebut
    * set posisi dengan p, notEatenC ke 0, dan hungry ke false */
  Animal(Position p);

  // getter-setter
  /** mengembalikan posisi dari binatang */
  Position getLocation() const;
  /** mengembalikan nilai dari notEatenC */
  int getNotEatenC() const;
  /** menentukan animal pernah makan atau tidak */
  bool getHasEaten() const;
  /** mengeset posisi dari animal tersebut */
  void setLocation(Position p);
  /** mengeset nilai notEatenC dari animal tersebut */
  void setNotEatenC(int p);
  /** mengeset binatang menjadi sudah pernah makan (hasEaten = true)*/
  void setHasEaten(bool eaten);

  // fungsi-fungsi lain
  /** mengeset nilai dari notEatenC = 0 */
  void animalHasEaten();
  /** menambahkan nilai dari notEatenC */
  void hungrier();
  /** menandakan kalau animal tersebut telah lapar (counter melebihi 10) */
  bool isHungry() const;
  /** menandakan kalau animal tersebut layak mati (terlalu lama tidak makan) */
  bool isDead() const;
  /** memberi nilai true jika berada di posisi p */
  bool isPosition(Position p) const;
  /** memberi nilai true jika berada di dekat posisi p */
  bool isNear(Position p) const;

  /** memberikan posisi random (atas, bawah, kiri, atau kanan) dari binatang tersebut */
  Position randomMove();

  /** mengembalikan true jika animal bisa move ke position di dalam Farm */
  virtual bool canBeInteracted() const;
  /** mengembalikan nilai false sebelum dioverride oleh killProduct anaknya */
  virtual bool canBeKilled() const;

  /** mengembalikan habitat dari binatang */
  virtual std::string getHabitat() const = 0;
  /** mengembalikan tipe binatang tersebut */
  virtual std::string animalType() const = 0;
  /** mengembalikan suara dari binatang yang dimakasud */
  virtual std::string sound() const = 0;

  /** mengembalikan hasil dari interact dengan animal, awalnya "" */
  virtual std::string interactProduct();
  /** mengembalikan hasil dari kill animal, awalnya "" */
  virtual std::string killProduct();
};

#endif
