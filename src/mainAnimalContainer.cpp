/**
  * @file mainAnimalContainer.cpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class AnimalContainer
  * @version 1
  * @date 2019-03-18
  */

// Compile
// g++ Position.cpp Animal.cpp AnimalContainer.cpp LinkedList.hpp Node.hpp Animal/EggProducingAnimal.cpp Animal/MeatProducingAnimal.cpp Animal/MilkProducingAnimal.cpp Animal/Real_Animal/Chicken.cpp Animal/Real_Animal/Cow.cpp Animal/Real_Animal/Duck.cpp Animal/Real_Animal/Goat.cpp Animal/Real_Animal/Horse.cpp Animal/Real_Animal/Rabbit.cpp mainAnimalContainer.cpp -o nama_file

#include "AnimalContainer.hpp"
#include "Animal/Real_Animal/Chicken.hpp"
#include "Animal/Real_Animal/Cow.hpp"
#include "Animal/Real_Animal/Goat.hpp"
#include <iostream>
using namespace std;

int main()
{
  int pil = 0;
  AnimalContainer animals;
  Chicken testAnimal1(Position(1, 2));
  Cow testAnimal2(Position(2, 3));
  Goat testAnimal3(Position(3, 4));

  cout << "Driver dari class AnimalContainer" << endl;
  while (pil != -1) {
    cout << "Masukkan pilihan pengecekan" << endl;
    cout << "1. getAnimal" << endl;
    cout << "2. getNumAnimal" << endl;
    cout << "3. setAnimal" << endl;
    cout << "4. noAnimalOn" << endl;
    cout << "5. addAnimal" << endl;
    cout << "6. removeAnimal" << endl;
    cout << "7. findOnPos" << endl;
    cout << "8. findNear" << endl;
    cout << "9. allAnimalMove" << endl;
    cout << "10. allAnimalHungrier" << endl;
    cout << "11. killDeads" << endl;
    cout << "12. printAnimals" << endl;
    cout << "-1. Exit" << endl;
    cin >> pil;

    if (pil == 1) {
      int num;
      cout << "Masukkan urutan: ";
      cin >> num;
      cout << "Animal tersebut adalah: " << animals.getAnimal(num)->animalType() << endl;
    }
    else if (pil == 2) {
      cout << "Jumlah animal = " << animals.getNumAnimal() << endl;
    }
    else if (pil == 3) {
      cout << "Susah diimplementasikan" << endl;
    }
    else if (pil == 4) {
      int x, y;
      cout << "Masukkan x: ";
      cin >> x;
      cout << "Masukkan y: ";
      cin >> y;
      cout << "NoAnimalOn: " << animals.noAnimalOn(Position(x, y)) << endl;
    }
    else if (pil == 5) {
      cout << "Adding testAnimal" << endl;
      if (animals.getNumAnimal() == 0)
      {
        animals.addAnimal(&testAnimal1);
        cout << "Added chicken" << endl;
      }
      else if (animals.getNumAnimal() == 1)
      {
        animals.addAnimal(&testAnimal2);
        cout << "Added cow" << endl;
      }
      else if (animals.getNumAnimal() == 2)
      {
        animals.addAnimal(&testAnimal3);
        cout << "Added goat" << endl;
      }
    }
    else if (pil == 6) {
      cout << "Removing testAnimal" << endl;
      if (animals.getNumAnimal() == 1)
      {
        animals.removeAnimal(&testAnimal1);
        cout << "Removed chicken" << endl;
      }
      else if (animals.getNumAnimal() == 2)
      {
        animals.removeAnimal(&testAnimal2);
        cout << "Removed cow" << endl;
      }
      else if (animals.getNumAnimal() == 3)
      {
        animals.removeAnimal(&testAnimal3);
        cout << "Removed goat" << endl;
      }
    }
    else if (pil == 7) {
      int x, y;
      cout << "Masukkan x: ";
      cin >> x;
      cout << "Masukkan y: ";
      cin >> y;
      Animal *target = animals.findOnPos(Position(x, y));
      if (target = nullptr)
      {
        cout << "No targets" << endl;
      }
      else
      {
        cout << "TypeAnimal: " << target->animalType() << endl;
      }
    }
    else if (pil == 8) {
      int x, y;
      cout << "Masukkan x: ";
      cin >> x;
      cout << "Masukkan y: ";
      cin >> y;
      Animal *target = animals.findNear(Position(x, y));
      if (target = nullptr)
      {
        cout << "No targets" << endl;
      }
      else
      {
        cout << "TypeAnimal: " << target->animalType() << endl;
      }
    }
    else if (pil == 9) {
      animals.allAnimalMove(10, 10);
      cout << "All animals moved" << endl;
    }
    else if (pil == 10) {
      animals.allAnimalHungrier();
      cout << "All animals hungrier" << endl;
    }
    else if (pil == 11) {
      animals.killDeads();
      cout << "Deads killed" << endl;
    }
    else if (pil == 12) {
      animals.printAnimals();
    }
    else if (pil == -1) {
      cout << "Exiting" << endl;
    }
    else {
      cout << "Invalid input" << endl;
    }
    cout << endl;
  }
  cout << "Driver end" << endl;
  return 0;
}
