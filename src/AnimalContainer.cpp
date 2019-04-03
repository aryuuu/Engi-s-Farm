// Compile
// g++ Position.cpp Animal.cpp AnimalContainer.cpp Animal/EggProducingAnimal.cpp Animal/MeatProducingAnimal.cpp Animal/MilkProducingAnimal.cpp Animal/Real_Animal/Chicken.cpp Animal/Real_Animal/Cow.cpp Animal/Real_Animal/Duck.cpp Animal/Real_Animal/Goat.cpp Animal/Real_Animal/Horse.cpp Animal/Real_Animal/Rabbit.cpp -o nama_file

#include "AnimalContainer.hpp"
#include <iostream>
using namespace std;

// ctor
/** membentuk container animal dengan animal kosong*/
AnimalContainer::AnimalContainer()
{
  animalList = new LinkedList<Animal*>();
  NumAnimal = 0;
}

// getter-setter
/** mendapatkan salah satu animal pada urutan ke berapa*/
Animal* AnimalContainer::getAnimal(int a)
{
  return animalList->head->data;
}
/** mengembalikan jumlah animal yang ada*/
int AnimalContainer::getNumAnimal()
{
  return this->NumAnimal;
}
/** mengeset nilai Animal pada urutan ke-i*/
void AnimalContainer::setAnimal(Animal* ani, int a)
{
  animalList->head->data = ani;
}

// fungsi-fungsi lain
/** menambahkan animal tertentu ke dalam animalList*/
void AnimalContainer::addAnimal(Animal* ani)
{
  animalList->add(ani);
}
/** menghapus animal tertentu dari animalList*/
void AnimalContainer::removeAnimal(Animal* ani)
{
  animalList->remove(ani);
}
/** mengembalikan animal pertama yang ditemukan yang memiliki posisi di atas, bawah, kiri, atau kanan */
Animal* AnimalContainer::findNear(Position pos)
{

}

/** mengembalikan true jika tidak ada animal di position tersebut*/
bool AnimalContainer::noAnimalOn(Position pos)
{
  return true;
}

/** menggerakkan seluruh animal di dalam list ini dengan move tidak valid (divalidkan dengan Render)*/
void AnimalContainer::allAnimalMove()
{

}
/** menambahkan tingkat kelaparan setiap animal (notEatenC)*/
void AnimalContainer::allAnimalHungrier()
{

}
/** membunuh setiap binatang yang layak mati*/
void AnimalContainer::killDeads()
{

}
