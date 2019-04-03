/**
  * @file DuckDriver.cpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Chicken
  * @version 1
  * @date 2019-04-04
  */

// Compile
// g++ Position.cpp Animal.cpp Animal/EggProducingAnimal.cpp Animal/MeatProducingAnimal.cpp Animal/MilkProducingAnimal.cpp Animal/Real_Animal/Chicken.cpp Animal/Real_Animal/Cow.cpp Animal/Real_Animal/Duck.cpp Animal/Real_Animal/Goat.cpp Animal/Real_Animal/Horse.cpp Animal/Real_Animal/Rabbit.cpp Animal/Real_Animal/DuckDriver.cpp -o nama_file

#include "Duck.hpp"
#include <iostream>
using namespace std;

int main()
{
  int pil = 0;
  Duck testAnimal(Position(1, 1));

  cout << "Driver dari class Duck" << endl;
  cout << "Duck yang dibuat berada di posisi (1, 1)" << endl;
  while (pil != -1) {
    cout << "Masukkan pilihan pengecekan" << endl;
    cout << "1. getLocation dari animal" << endl;
    cout << "2. getNotEatenC dari animal" << endl;
    cout << "3. getHasEaten dari animal" << endl;
    cout << "4. setLocation dari animal" << endl;
    cout << "5. setNotEatenC dari animal" << endl;
    cout << "6. setHasEaten dari animal" << endl;
    cout << "7. animalHasEaten dari animal" << endl;
    cout << "8. hungrier dari animal" << endl;
    cout << "9. isHungry dari animal" << endl;
    cout << "10. isDead dari animal" << endl;
    cout << "11. isPosition dari animal" << endl;
    cout << "12. isNear dari animal" << endl;
    cout << "13. randomMove dari animal" << endl;
    cout << "14. canBeInteracted dari animal tersebut" << endl;
    cout << "15. canBeKilled dari animal tersebut" << endl;
    cout << "16. interactProduct dari animal tersebut" << endl;
    cout << "17. killProduct dari animal tersebut" << endl;
    cout << "18. getHabitat dari animal tersebut" << endl;
    cout << "19. animalType dari animal tersebut" << endl;
    cout << "20. sound dari animal tersebut" << endl;

    cout << "-1. Exit" << endl;
    cin >> pil;

    // Bagian eksekusi pilihan
    // getLocation
    if (pil == 1) {
      Position pos = testAnimal.getLocation();
      cout << "X = " << pos.getAbsis() << endl;
      cout << "Y = " << pos.getOrdinat() << endl;
    }
    // getNotEatenC
    else if (pil == 2) {
      cout << "notEatenC = " << testAnimal.getNotEatenC() << endl;
    }
    // getHasEaten
    else if (pil == 3) {
      cout << "hasEaten = " << testAnimal.getHasEaten() << endl;
    }
    // setLocation
    else if (pil == 4) {
      int x, y;
      cout << "Masukkan x: ";
      cin >> x;
      cout << "Masukkan y: ";
      cin >> y;
      testAnimal.setLocation(Position(x, y));
      cout << "Set location done" << endl;
    }
    // setNotEatenC
    else if (pil == 5) {
      int n;
      cout << "Masukkan nilai angka notEatenC: ";
      cin >> n;
      testAnimal.setNotEatenC(n);
      cout << "Set notEatenC done" << endl;
    }
    // setHasEaten
    else if (pil == 6) {
      int n;
      cout << "Masukkan angka sudah makan atau belom (0 / 1): ";
      cin >> n;
      if (n == 0)
      {
        testAnimal.setHasEaten(false);
      }
      else if (n == 1)
      {
        testAnimal.setHasEaten(true);
      }
      else
      {
        cout << "Invalid input" << endl;
      }
      cout << "Set hasEaten done" << endl;
    }
    // animalHasEaten
    else if (pil == 7) {
      testAnimal.animalHasEaten();
      cout << "Animal has eaten done" << endl;
    }
    // hungrier
    else if (pil == 8) {
      testAnimal.hungrier();
      cout << "Hungrier done" << endl;
    }
    // isHungry
    else if (pil == 9) {
      cout << "isHungry = " << testAnimal.isHungry() << endl;
    }
    // isDead
    else if (pil == 10) {
      cout << "isDead = " << testAnimal.isDead() << endl;
    }
    // isPosition
    else if (pil == 11) {
      int x;
      int y;
      cout << "Masukkan x: ";
      cin >> x;
      cout << "Masukkan y: ";
      cin >> y;
      cout << "isPosition = " << testAnimal.isPosition(Position(x, y)) << endl;
    }
    // isNear
    else if (pil == 12) {
      int x;
      int y;
      cout << "Masukkan x: ";
      cin >> x;
      cout << "Masukkan y: ";
      cin >> y;
      cout << "isNear = " << testAnimal.isNear(Position(x, y)) << endl;
    }
    // randomMove
    else if (pil == 13) {
      Position nextPos = testAnimal.randomMove();
      cout << "Random move = (" << nextPos.getAbsis() << "," << nextPos.getOrdinat() << ")" << endl;
    }
    // canBeInteracted
    else if (pil == 14) {
      cout << "canBeInteracted = " << testAnimal.canBeInteracted() << endl;
    }
    // canBeKilled
    else if (pil == 15) {
      cout << "canBeKilled = " << testAnimal.canBeKilled() << endl;
    }
    // interactProduct
    else if (pil == 16) {
      cout << "interactProduct = " << testAnimal.interactProduct() << endl;
    }
    // killProduct
    else if (pil == 17) {
      cout << "killProduct = " << testAnimal.killProduct() << endl;
    }
    // getHabitat
    else if (pil == 18) {
      cout << "getHabitat = " << testAnimal.getHabitat() << endl;
    }
    // animalType
    else if (pil == 19) {
      cout << "animalType = " << testAnimal.animalType() << endl;
    }
    // sound
    else if (pil == 20) {
      cout << "sound = " << testAnimal.sound() << endl;
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
}
