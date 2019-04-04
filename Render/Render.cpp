#include "Render.hpp"
#include <iostream>
#include <fstream>
#include <string>

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
            this->farm[i][j] = new Land(true, i, j);
        }
    }
}

/** Constructor: From file */
Render::Render(std::string filename)
{
    int count = 0;
    std::ifstream file(filename);
    std::string str;
    count++;
    std::getline(file, str);
    this->maxY = str.length();
    while (std::getline(file, str))
    {
      count++;
    }
    this->maxX = count;

    this->farm = new Cell **[maxX];
    for (int i = 0; i < maxY; i++)
    {
        this->farm[i] = new Cell *[maxY];
    }

    std::ifstream file2(filename);
    int i = 0;
    while (std::getline(file, str))
    {
      for (int j = 0; j < (this->maxY); j++)
      {
        // Atur kalau baca land (coop / barn / grassland) atau facility (well / mixer / truck)
      }
      i++;
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

Cell* Render::getLegendCell(int x, int y)
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
