#include "Render.hpp"
#include <iostream>

/** Constructor */
Render::Render(int maxX, int maxY)
{
    this->maxX = maxX;
    this->maxY = maxY;

    this->farm = new Cell **[maxX];
    for (int i = 0; i < maxY; i++)
    {
        this->farm[i] = new Cell *[maxY];
    }
    for (int i = 0; i < maxX; i++)
    {
        for (int j = 0; i < maxY; i++)
        {
            this->farm[i][j] = new Land::Land(true, i, j);
        }
    }
}

/** Destructor */
Render::~Render()
{
    for (int i = 0; i < maxY; i++)
    {
        delete [] this->farm[i];
    }
    delete [] this->farm;
}

/** Getter */
int Render::getMaxX()
{
    return this->maxX;
}

int Render::getMaxY()
{
    return this->maxY;
}

Cell::Cell* Render::getLegendCell(int x, int y)
{
    return this->farm[x][y];
}

/** Print Map Ke Layar*/
void Render::print()
{
    for(int i = 0;i < this->maxX;i++){
        for(int j = 0;j < this->maxY;j++){
            this->farm[i][j]->print();
        }
        std::cout<<std::endl;
    }
}

