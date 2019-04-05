#include "AnimalContainer.hpp"
#include "Animal/Real_Animal/Chicken.hpp"
#include "Animal/Real_Animal/Cow.hpp"
#include "Animal/Real_Animal/Duck.hpp"
#include "Animal/Real_Animal/Goat.hpp"
#include "Animal/Real_Animal/Horse.hpp"
#include "Animal/Real_Animal/Rabbit.hpp"
#include "Render/Render.hpp"

// Compile
// g++ Position.cpp Animal.cpp AnimalContainer.cpp Animal/EggProducingAnimal.cpp Animal/MeatProducingAnimal.cpp Animal/MilkProducingAnimal.cpp Animal/Real_Animal/Chicken.cpp Animal/Real_Animal/Cow.cpp Animal/Real_Animal/Duck.cpp Animal/Real_Animal/Goat.cpp Animal/Real_Animal/Horse.cpp Animal/Real_Animal/Rabbit.cpp Render/Cell.cpp Render/Land.cpp Render/Facility.cpp Render/Facility/Well.cpp Render/Facility/Truck.cpp Render/Facility/Mixer.cpp Render/Render.cpp tester.cpp -o nama_file

#include <iostream>
using namespace std;

int main()
{
    Render map("Render/testfile.txt");
    AnimalContainer animals;
    Chicken testAnimal1(Position(1, 2));
    Cow testAnimal2(Position(5, 6));
    Duck testAnimal3(Position(2, 3));
    Goat testAnimal4(Position(6, 8));
    Horse testAnimal5(Position(10, 1));
    Rabbit testAnimal6(Position(9, 10));
    animals.addAnimal(&testAnimal1);
    animals.addAnimal(&testAnimal2);
    animals.addAnimal(&testAnimal3);
    animals.addAnimal(&testAnimal4);
    animals.addAnimal(&testAnimal5);
    animals.addAnimal(&testAnimal6);


    cout << "Tester Animal + Map" << endl;

    // Print map
    cout << map.getMaxX() << endl;
    cout << map.getMaxY() << endl;
    for (int i = 0; i < map.getMaxX(); i++)
    {
        for (int j = 0; j < map.getMaxY(); j++)
        {
            if (animals.noAnimalOn(Position(i, j)) == false)
            {
                animals.findOnPos(Position(i, j))->printTile();
            }
            else
            {
                map.getLegendCell(i, j)->print();
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}