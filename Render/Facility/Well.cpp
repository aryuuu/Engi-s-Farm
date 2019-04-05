#include "Well.hpp"
#include <iostream>

//Ctor
Well::Well(int x, int y):Facility(x,y,"well")
{

}

/**Print Well Pada Layar*/
void Well::print()
{
    std::cout << "Called" << std::endl;
    std::cout<<"W";
}
