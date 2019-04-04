#include "Facility.hpp"

/** Constructor */
Facility::Facility(int x, int y, std::string legend): Cell(x,y),legend(legend)
{

}


//Getter
std::string Facility::getLegend()
{
    return this->legend;
}

