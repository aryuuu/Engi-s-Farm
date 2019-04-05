#include "Truck.hpp"
#include <iostream>

//Ctor
Truck::Truck(int x, int y):Facility(x,y,"truck")
{

}

/**Print Well Pada Layar*/
void Truck::print()
{
    // std::cout << "Called" << std::endl;
    std::cout<<"T";
}
