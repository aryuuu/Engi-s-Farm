#include <iostream>

#ifndef _CELL_HPP
#define _CELL_HPP

class Cell
{
private:
    int x,y;
public:

    int getPosX();
    int getPosY();

    virtual void print() = 0;
};

#endif