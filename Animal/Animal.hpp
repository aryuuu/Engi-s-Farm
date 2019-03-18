/**
  * @file Animal.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Animal
  * @version 1
  * @date 2019-03-18
  */

#include "Position.hpp"
#include "Farm.hpp"
#include <string>

#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP

/** Class Animal: ABC yang menggambarkan setiap animal yang terdapat dalam game */
class Animal
{
private:
  Position loc;              // mengembalikan posisi dari sebuah binatang
  int notEatenC;             // counter menghitung berapa turn terlewati setelah animal tidak makan
  bool hungry;               // menentukan apakah binatang tersebut lapar atau tidak
public:
  /** ctor
    * konstruktor kelas binatang yang menentukan lokasi binatang tersebut
    * set posisi dengan p, notEatenC ke 0, dan hungry ke true */
  Animal(Position p);

  // getter-setter
  /** mengembalikan posisi dari binatang */
  Position getLocation() const;
  /** mengembalikan nilai dari notEatenC */
  int getNotEatenC() const;
  /** mengembalikan nilai boolean hungry */
  bool getHungry() const;
  /** mengeset posisi dari animal tersebut */
  void setLocation(Position p);
  /** mengeset nilai notEatenC dari animal tersebut */
  void setNotEatenC(int p);
  /** mengeset binatang menjadi lapar */
  void setHungry();
  /** mengeset binatang menjadi kenyang */
  void setFull();

  // fungsi-fungsi lain
  /** mengeset nilai dari notEatenC = 0 */
  void hasEaten();
  /** menambahkan nilai dari notEatenC */
  void hungrier();
  /** menandakan kalau animal tersebut layak mati (terlalu lama tidak makan) */
  bool isDead() const;
  /** memberi nilai true jika berada di posisi p */
  bool isPosition(Position p) const;
  /** memberi nilai true jika berada di dekat posisi p */
  bool isNear(Position p) const;

  /** memberikan posisi random (atas, bawah, kiri, atau kanan) dari binatang tersebut */
  Position randomMove();
  /** menghasilkan posisi animal bergerak yang valid */
  void animalMove();

  /** mengembalikan true jika animal bisa move ke position di dalam Farm */
  virtual bool canMoveTo(Position, Farm) const;
  /** mengembalikan nilai false sebelum dioverride oleh interactProduct anaknya */
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
  virtual std::string interactProduct() const;
  /** mengembalikan hasil dari kill animal, awalnya "" */
  virtual std::string killProduct() const;
};

#endif
