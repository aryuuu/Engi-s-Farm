#include "Cell.hpp"
#include <iostream>
using namespace std;

/** Constructor */
Cell::Cell(int x, int y,std::string legend):legend(legend)
{
    this->x = x;
    this->y = y;
}

/** Getter */
int Cell::getPosX()
{
    return this->x;
}

int Cell::getPosY()
{
    return this->y;
}

std::string Cell::getLegend()
{
    return this->legend;
}

/** Setter */
void Cell::setPosX(int x)
{
    this->x = x;
}

void Cell::setPosY(int y)
{
    this->y = y;
}
