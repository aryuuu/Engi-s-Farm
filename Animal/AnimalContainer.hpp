//#include "LinkedList.hpp"
#include "Position.hpp"
#include "Animal.hpp"
//#include "Farm.hpp"

#ifndef _ANIMAL_CONTAINER_HPP
#define _ANIMAL_CONTAINER_HPP

// Class berisi data animal yang hidup
// Memanfaatkan linkedList

class AnimalContainer
{
private:
  LinkedList<Animal*> animalList;
  int NumAnimal;
public:
  // ctor
  AnimalContainer();      // membentuk container animal dengan animal kosong

  // getter-setter
  Animal* getAnimal(int);         // mendapatkan salah satu animal pada urutan ke berapa
  int getNumAnimal();            // mengembalikan jumlah animal yang ada
  void setAnimal(Animal*, int);   // mengeset nilai Animal pada urutan ke-i

  // fungsi-fungsi lain
  void addAnimal(Animal*);      // menambahkan animal tertentu ke dalam animalList
  void removeAnimal(Animal*);   // menghapus animal tertentu dari animalList
  Animal* findNear(Position);   // mengembalikan animal pertama yang ditemukan
                               // yang memiliki posisi di atas, bawah, kiri, atau kanan

  void allAnimalMove(Farm);    // menggerakkan seluruh animal di dalam list ini
  void allAnimalHungrier();    // menambahkan tingkat kelaparan setiap
};

#endif
