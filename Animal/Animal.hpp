#include "Position.hpp"
#include "Farm.hpp"
#include <string>

#ifndef _ANIMAL_HPP
#define _ANIMAL_HPP

// Class animal
// ABC yang menggambarkan setiap animal yang terdapat dalam game
class Animal
{
private:
  Position loc;              // mengembalikan posisi dari sebuah binatang
  int notEatenC;             // counter menghitung berapa turn terlewati setelah animal tidak makan
  bool hungry;               // menentukan apakah binatang tersebut lapar atau tidak
public:
  // ctor
  // konstruktor kelas binatang yang menentukan lokasi binatang tersebut
  // set posisi dengan p, notEatenC ke 0, dan hungry ke true
  Animal(Position p);

  // getter-setter
  Position getLocation() const;       // mengembalikan posisi dari binatang
  int getNotEatenC() const;           // mengembalikan nilai dari notEatenC
  bool getHungry() const;             // mengembalikan nilai boolean hungry
  void setLocation(Position p);       // mengeset posisi dari animal tersebut
  void setNotEatenC(int p);           // mengeset nilai notEatenC dari animal tersebut
  void setHungry();                   // mengeset binatang menjadi lapar
  void setFull();                     // mengeset binatang menjadi kenyang

  // fungsi-fungsi lain
  void hasEaten();                    // mengeset nilai dari notEatenC = 0
  void hungrier();                    // menambahkan nilai dari notEatenC
  bool isDead() const;                // menandakan kalau animal tersebut layak mati (terlalu lama tidak makan)
  bool isPosition(Position p) const;  // memberi nilai true jika berada di posisi p
  bool isNear(Position p) const;      // memberi nilai true jika berada di dekat posisi p

  Position randomMove();              // memberikan posisi random (atas, bawah, kiri, atau kanan) dari binatang tersebut
  void animalMove();                  // menghasilkan posisi animal bergerak yang valid

  virtual bool canMoveTo(Position, Farm) const;    // mengembalikan true jika animal bisa move ke position di dalam Farm
  virtual bool canBeInteracted() const;            // mengembalikan nilai false sebelum dioverride oleh interactProduct anaknya
  virtual bool canBeKilled() const;                // mengembalikan nilai false sebelum dioverride oleh killProduct anaknya

  virtual std::string getHabitat() const = 0;      // mengembalikan habitat dari binatang
  virtual std::string animalType() const = 0;      // mengembalikan tipe binatang tersebut
  virtual std::string sound() const = 0;           // mengembalikan suara dari binatang yang dimakasud

  virtual std::string interactProduct() const;     // mengembalikan hasil dari interact dengan animal, awalnya ""
  virtual std::string killProduct() const;         // mengembalikan hasil dari kill animal, awalnya ""
};

#endif
