// Compile
// g++ AnimalContainer.cpp Position.cpp Player.cpp Animal.cpp Animal/EggProducingAnimal.cpp Animal/MeatProducingAnimal.cpp Animal/MilkProducingAnimal.cpp Animal/Real_Animal/Chicken.cpp Animal/Real_Animal/Cow.cpp Animal/Real_Animal/Duck.cpp Animal/Real_Animal/Goat.cpp Animal/Real_Animal/Horse.cpp Animal/Real_Animal/Rabbit.cpp Product/ButtermilkChicken.cpp Product/ChickenEgg.cpp Product/ChickenMeat.cpp Product/CowMeat.cpp Product/CowMilk.cpp Product/DuckEgg.cpp Product/HorseMilk.cpp Product/Meatball.cpp Product/Omellete.cpp Product/Product.cpp Product/RabbitMeat.cpp Render/Cell.cpp Render/Facility.cpp Render/Land.cpp Render/Render.cpp Render/Facility/Well.cpp Render/Facility/Mixer.cpp Render/Facility/Truck.cpp main2.cpp -o testaa

#include "AnimalContainer.hpp"
#include "Player.hpp"
#include "Render/Render.hpp"
#include "Animal/Real_Animal/Chicken.hpp"
#include "Animal/Real_Animal/Cow.hpp"
#include "Animal/Real_Animal/Duck.hpp"
#include "Animal/Real_Animal/Goat.hpp"
#include "Animal/Real_Animal/Horse.hpp"
#include "Animal/Real_Animal/Rabbit.hpp"
#include <iostream>
using namespace std;

Render map("Render/testfile.txt");
AnimalContainer animals;
Player P;

void printAll();
void allAnimalMove();
void allAnimalEatGrass();

int main()
{
	// Buat animal"
	Chicken testAnimal1(Position(0, 1));
	Cow testAnimal2(Position(5, 6));
	Duck testAnimal3(Position(2, 3));
	Goat testAnimal4(Position(5, 7));
	Horse testAnimal5(Position(10, 1));
	Rabbit testAnimal6(Position(9, 10));
	animals.addAnimal(&testAnimal1);
	animals.addAnimal(&testAnimal2);
	animals.addAnimal(&testAnimal3);
	animals.addAnimal(&testAnimal4);
	animals.addAnimal(&testAnimal5);
	animals.addAnimal(&testAnimal6);

	string cmd = "";
	
	while (cmd != "Exit")
	{
		printAll();
		P.print();
		cout << endl << "Command: ";
		cin >> cmd;
		if (cmd == "u")
		{
			if (map.isValidPos((P.getX() - 1), P.getY()) && animals.noAnimalOn(Position((P.getX() - 1), P.getY())))
			{
				cout << (P.getX() - 1)	 << endl;
				P.playerMove('u');
				cout << P.getY() << endl;
			}
			else
			{
				cout << "Invalid Move" << endl;
			}
		}
		else if (cmd == "l")
		{
			if (animals.noAnimalOn(Position(P.getX(), (P.getY() - 1))) && map.isValidPos(P.getX(), (P.getY() - 1)))
			{
				P.playerMove('l');
			}
			else
			{
				cout << "Invalid Move" << endl;
			}
		}
		else if (cmd == "d")
		{
			if (animals.noAnimalOn(Position((P.getX() + 1), P.getY())) && map.isValidPos((P.getX() + 1), P.getY()))
			{
				P.playerMove('d');
			}
			else
			{
				cout << "Invalid Move" << endl;
			}
		}
		else if (cmd == "r")
		{
			if (animals.noAnimalOn(Position(P.getX(), (P.getY() + 1))) && map.isValidPos(P.getX(), (P.getY() + 1)))
			{
				P.playerMove('r');
			}
			else
			{
				cout << "Invalid Move" << endl;
			}
		}
		else if (cmd == "kill")
		{
			//udah dapet hewan x
			Position Pos(P.getX(), P.getY());
			bool Killed = false;
			if (!animals.noAnimalNear(Pos))
			{
				Animal* targetA = animals.findNear(Pos);
				cout << "Animal: " << targetA->animalType() << endl;
				if (targetA->canBeKilled())
				{
					cout << "Hewan dapat dibunuh" << endl;
					cout << "Kill Product: " << (targetA->killProduct()) << endl;
					P.addProduct2(targetA->killProduct());
					animals.removeAnimal(targetA);
				}
				else
				{
					cout << "Hewan tidak dapat dibunuh karena tidak menghasilkan apa-apa" << endl;
				}
			}	
			else
			{
				cout << "Tidak ada hewan yang bisa dibunuh" << endl;
			}
		}
		else if (cmd == "interact")
		{
			Position Pos(P.getX(), P.getY());
			if (!animals.noAnimalNear(Pos))
			{
				Animal* targetA = animals.findNear(Pos);
				cout << "Animal: " << targetA->animalType() << endl;
				if (targetA->canBeInteracted() && targetA->getHasEaten())
				{
					cout << "Hewan dapat berinteraksi" << endl;
					cout << "Interact Product: " << (targetA->interactProduct()) << endl;
					targetA->setHasEaten(false);
					P.addProduct2(targetA->interactProduct());
				}
				else
				{
					cout << "Hewan tidak dapat diinteraksi karena memang tidak bisa atau karena masih lapar" << endl;
				}
			}
			else if (map.isNear(P.getX(), P.getY(), "well"))
			{
				cout << "Well here..." << endl;
				P.addWater();
			}
			else if (map.isNear(P.getX(), P.getY(), "truck"))
			{
				cout << "Truck here..." << endl;	
				P.delProductAll();
			}
			else if (map.isNear(P.getX(), P.getY(), "mixer"))
			{
				cout << "Mixer here..." << endl;
				// belum diimplementasikan
			}
			else
			{
				cout << "Tidak ada yang bisa di-interact"  << endl;
			}
		}
		else if (cmd == "talk")
		{
			//udah dapet hewan x
			Position Pos(P.getX(), P.getY());
			if (!animals.noAnimalNear(Pos))
			{
				Animal* targetA = animals.findNear(Pos);
				cout << "Animal: " << (targetA->animalType()) << " says " << (targetA->sound()) << endl;
			}	
			else
			{
				cout << "Tidak ada hewan di sekitar yang bisa diajak bicara" << endl;
			}
		}
		else if (cmd == "grow")
		{
			cout << "Growing the grass" << endl;
			if (P.)
			//masih bingung
			// if(!map.getLegendCell(P.getX(),P.getY())->getIsGrass()){
			// 	map.getLegendCell(P.getX(),P.getY())->setIsGrass(true);
			// }else{
			// 	cout<<"Rumput telah tumbuh"<<endl;
			// }
		}
		else
		{
			cout << "perintah salah" << endl;
		}
		
		allAnimalMove();
		//animals.allAnimalHungrier();
		allAnimalEatGrass();
		//animals.killDeads();
	}
}

void printAll()
{
	for (int i = 0; i < map.getMaxX(); i++)
    {
		//cout << "Called" << endl;	
        for (int j = 0; j < map.getMaxY(); j++)
        {
            if (animals.noAnimalOn(Position(i, j)) == false)
            {
                animals.findOnPos(Position(i, j))->printTile();
            }
			else if (i == P.getX() && j == P.getY())
			{
				cout << "P";
			}
            else
            {
                map.getLegendCell(i, j)->print();
            }
            cout << " ";
        }
        cout << endl;
    }
}

void allAnimalMove()
{
  for (int i = 1; i <= animals.getNumAnimal(); i++)
  {
    Position temp = animals.getAnimal(i)->randomMove();
    if (temp.getAbsis() >= 0 && temp.getOrdinat() >= 0 && temp.getAbsis() < map.getMaxX() && temp.getOrdinat() < map.getMaxY())
    {
      if (animals.noAnimalOn(temp) && temp != Position(P.getX(), P.getY()) && map.getLegendCell(temp.getAbsis(), temp.getOrdinat())->getLegend() == animals.getAnimal(i)->getHabitat())
      {
        animals.getAnimal(i)->setLocation(temp);
      }
    }
  }
}

/** membuat setiap animal yang berada di atas rumput dan masih lapar makan */
void allAnimalEatGrass()
{
  for (int i = 1; i <= animals.getNumAnimal(); i++)
  {
    if (animals.getAnimal(i)->getHasEaten() == false)
    {
      Position pos = animals.getAnimal(i)->getLocation();
      if (map.getLegendCell(pos.getAbsis(), pos.getOrdinat())->isGrassOn() == true)
      {
        map.getLegendCell(pos.getAbsis(), pos.getOrdinat())->eatGrass();
        animals.getAnimal(i)->animalHasEaten();
      }
    }
  }
}

