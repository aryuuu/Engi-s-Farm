#include "Position.hpp"
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
  Position getLocation();     // mengembalikan posisi dari binatang
  int getNotEatenC();         // mengembalikan nilai dari notEatenC
  bool getHungry();            // mengembalikan nilai boolean hungry
  void setLocation(Position p); // mengeset posisi dari animal tersebut
  void setNotEatenC(int p);    // mengeset nilai notEatenC dari animal tersebut
  void setHungry();            // mengeset binatang menjadi lapar
  void setFull();              // mengeset binatang menjadi kenyang


  // fungsi-fungsi lain
  void hasEaten();             // mengeset nilai dari notEatenC = 0
  void hungrier();             // menambahkan nilai dari notEatenC
  bool isDead();               // menandakan kalau animal tersebut layak mati (terlalu lama tidak makan)
  bool isPosition(Position p);  // memberi nilai true jika berada di posisi p
  bool isNear(Position p);    // memberi nilai true jika berada di dekat posisi p

  virtual bool canBeInteracted(); // mengembalikan nilai false sebelum dioverride oleh interactProduct anaknya
  virtual bool canBeKilled();     // mengembalikan nilai false sebelum dioverride oleh killProduct anaknya

  virtual std::string sound() = 0;  // mengembalikan suara dari binatang yang dimakasud
  virutal std::string interactProduct() = 0; // mengembalikan hasil dari interact dengan animal
  virtual std::string killProduct() = 0;     // mengembalikan hasil dari kill animal
};

#endif
