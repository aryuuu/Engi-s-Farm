#include "Cell.hpp"
#include <iostream>
using namespace std;

/** Constructor */
Cell::Cell(int x, int y)
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

/** Setter */
void Cell::setPosX(int x)
{
    this->x = x;
}

void Cell::setPosY(int y)
{
    this->y = y;
}
