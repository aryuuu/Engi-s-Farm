/**
  * @file AnimalContainer.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class AnimalContainer
  * @version 1
  * @date 2019-03-18
  */

#include "Animal.hpp"
#include "LinkedList2.hpp"

#ifndef _ANIMAL_CONTAINER_HPP
#define _ANIMAL_CONTAINER_HPP

/** Class AnimalContainer: LinkedList yang berisi animal-animal yang hidup di farm */
class AnimalContainer
{
private:
  LinkedList<Animal*> animalList;     // menandakan animal-animal yang masih hidup di farm
public:
  // ctor
  /** membentuk container animal dengan animal kosong*/
  AnimalContainer();

  // getter-setter
  /** mendapatkan salah satu animal pada urutan ke berapa*/
  Animal* getAnimal(int);
  /** mengembalikan jumlah animal yang ada*/
  int getNumAnimal();
  /** mengeset nilai Animal pada urutan ke-i*/
  void setAnimal(Animal* ani, int a);

  // fungsi-fungsi lain
  /** mengembalikan true jika tidak ada animal di position tersebut*/
  bool noAnimalOn(Position);
  /** menambahkan animal tertentu ke dalam animalList*/
  void addAnimal(Animal*);
  /** menghapus animal tertentu dari animalList*/
  void removeAnimal(Animal*);
  /** mengembalikan animal yang berada pada posisi tersebut*/
  Animal* findOnPos(Position);
  /** mengembalikan animal pertama yang ditemukan yang memiliki posisi di atas, bawah, kiri, atau kanan */
  Animal* findNear(Position);


  /** menggerakkan seluruh animal di dalam list ini dengan move tidak valid (divalidkan dengan Render)*/
  void allAnimalMove(int, int);
  /** menambahkan tingkat kelaparan setiap animal (notEatenC)*/
  void allAnimalHungrier();
  /** membunuh setiap binatang yang layak mati*/
  void killDeads();
  /** print semua animal di list */
  void printAnimals();
};

#endif