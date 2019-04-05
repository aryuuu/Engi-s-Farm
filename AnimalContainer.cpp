// Compile
// g++ Position.cpp Animal.cpp AnimalContainer.cpp Animal/EggProducingAnimal.cpp Animal/MeatProducingAnimal.cpp Animal/MilkProducingAnimal.cpp Animal/Real_Animal/Chicken.cpp Animal/Real_Animal/Cow.cpp Animal/Real_Animal/Duck.cpp Animal/Real_Animal/Goat.cpp Animal/Real_Animal/Horse.cpp Animal/Real_Animal/Rabbit.cpp -o nama_file

#include "AnimalContainer.hpp"
#include <iostream>
using namespace std;

// ctor
/** membentuk container animal dengan animal kosong*/
AnimalContainer::AnimalContainer()
{
  animalList = LinkedList2<Animal*>();
}

// getter-setter
/** mendapatkan salah satu animal pada urutan ke berapa*/
Animal* AnimalContainer::getAnimal(int a)
{
  if (a <= getNumAnimal() && a > 0)
  {
    return animalList.getElmt(a);
  }
  else
  {
    return nullptr;
  }
}

/** mengembalikan jumlah animal yang ada*/
int AnimalContainer::getNumAnimal()
{
  return this->animalList.length;
}

/** mengeset nilai Animal pada urutan ke-i*/
void AnimalContainer::setAnimal(Animal* ani, int a)
{
  if (a <= getNumAnimal() && a > 0)
  {
    Animal* temp = getAnimal(a);
    temp = ani;
    delete temp;
  }
  else
  {
    cout << "Fail" << endl;
  }
}

// fungsi-fungsi lain
/** mengembalikan true jika tidak ada animal di position tersebut*/
bool AnimalContainer::noAnimalOn(Position pos)
{
  bool notFound = true;
  int i = 1;
  while (notFound && i <= getNumAnimal())
  {
    Position temp = getAnimal(i)->getLocation();
    if (temp == pos)
    {
      notFound = false;
    } else {
      i++;
    }
  }
  return notFound;
}
/** mengembalikan true jika tidak terdapat animal dekat position tersebut */
bool AnimalContainer::noAnimalNear(Position pos)
{
  bool notFound = true;
  int i = 1;
  while (notFound && i <= getNumAnimal())
  {
    if (getAnimal(i)->isNear(pos))
    {
      notFound = false;
    } else {
      i++;
    }
  }
  return notFound;
}

/** menambahkan animal tertentu ke dalam animalList*/
void AnimalContainer::addAnimal(Animal* ani)
{
  animalList.add(ani);
}
/** menghapus animal tertentu dari animalList*/
void AnimalContainer::removeAnimal(Animal* ani)
{
  animalList.remove(ani);
}
/** mengembalikan animal yang berada pada posisi tersebut*/
Animal* AnimalContainer::findOnPos(Position pos)
{
  bool notFound = true;
  int i = 1;
  while (notFound && i <= getNumAnimal())
  {
    Position temp = getAnimal(i)->getLocation();
    if (temp == pos)
    {
      notFound = false;
    } else {
      i++;
    }
  }
  if (notFound) {
    return nullptr;
  } else {
    return getAnimal(i);
  }
}
/** mengembalikan animal pertama yang ditemukan yang memiliki posisi di atas, bawah, kiri, atau kanan */
Animal* AnimalContainer::findNear(Position pos)
{
  bool notFound = true;
  int i = 1;
  while (notFound && i <= getNumAnimal())
  {
    if (getAnimal(i)->isNear(pos))
    {
      notFound = false;
    } else {
      i++;
    }
  }
  if (notFound) {
    return nullptr;
  } else {
    int px = pos.getAbsis();
    int py = pos.getOrdinat();
    if (!noAnimalOn(Position((px - 1), py)))
    {
      return findOnPos(Position((px - 1), py));
    }
    else if (!noAnimalOn(Position((px + 1), py)))
    {
      return findOnPos(Position((px + 1), py));
    }
    else if (!noAnimalOn(Position(px, (py - 1))))
    {
      return findOnPos(Position(px, (py - 1)));
    }
    else if (!noAnimalOn(Position(px, (py + 1))))
    {
      return findOnPos(Position(px, (py + 1)));
    }
    else
    {
      return nullptr;
    }
  }
}

/** menggerakkan seluruh animal di dalam list ini dengan move tidak valid (divalidkan dengan Render)*/
void AnimalContainer::allAnimalMove(Position playerPos, Render map)
{
  for (int i = 1; i <= getNumAnimal(); i++)
  {
    Position temp = getAnimal(i)->randomMove();
    if (temp.getAbsis() >= 0 && temp.getOrdinat() >= 0 && temp.getAbsis() < map.getMaxX() && temp.getOrdinat() < map.getMaxY())
    {
      if (noAnimalOn(temp) && temp != PlayerPos && temp.getLegendCell(temp.getAbsis(), temp.getOrdinat())->getLegend() == getAnimal(i)->getHabitat())
      {
        getAnimal(i)->setLocation(temp);
      }
    }
  }
}
/** menambahkan tingkat kelaparan setiap animal (notEatenC)*/
void AnimalContainer::allAnimalHungrier()
{
  for (int i = 1; i <= getNumAnimal(); i++)
  {
    getAnimal(i)->hungrier();
  }
}
/** membunuh setiap binatang yang layak mati*/
void AnimalContainer::killDeads()
{
  for (int i = 1; i <= getNumAnimal(); i++)
  {
    if (getAnimal(i)->isDead())
    {
      removeAnimal(getAnimal(i));
    }
  }
}
/** print semua animal di list */
void AnimalContainer::printAnimals()
{
  for (int i = 1; i <= getNumAnimal(); i++)
  {
    cout << "Animal [" << i << "]: " << getAnimal(i)->animalType() << "; (" << getAnimal(i)->getLocation().getAbsis() << "," << getAnimal(i)->getLocation().getOrdinat() << "); " << getAnimal(i)->getNotEatenC() << endl;
  }
}
