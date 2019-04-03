// Compile
// g++ Position.cpp Animal.cpp Animal/EggProducingAnimal.cpp Animal/MeatProducingAnimal.cpp Animal/MilkProducingAnimal.cpp Animal/Real_Animal/Chicken.cpp Animal/Real_Animal/Cow.cpp Animal/Real_Animal/Duck.cpp Animal/Real_Animal/Goat.cpp Animal/Real_Animal/Horse.cpp Animal/Real_Animal/Rabbit.cpp Animal/Real_Animal/ChickenDriver.cpp -o nama_file

#include "Chicken.hpp"
#include <iostream>
using namespace std;

class ChickenV2
{
private:
  int x;
  int y;
public:
  ChickenV2(int x, int y)
  {
    this->x = x;
    this->y = y;
  }
  int getX()
  {
    return this->x;
  }
  int getY()
  {
    return this->y;
  }
};

int main()
{
  int pil = 0;
  Chicken testAnimal(Position(1, 1));

  cout << "Driver dari class Chicken" << endl;
  cout << "Chicken yang dibuat berada di posisi 1, 1" << endl;
  while (pil != -1) {
    cout << "Masukkan pilihan pengecekan" << endl;
    cout << "1. getLocation dari animal" << endl;
    cout << "2. getNotEatenC dari animal" << endl;
    cout << "3. getHasEaten dari animal" << endl;
    cout << "4. setLocation dari animal" << endl;
    cout << "5. setNotEatenC dari animal" << endl;
    cout << "6. setHasEaten dari animal" << endl;
    cout << "7. activate animalHasEaten dari animal" << endl;
    
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
