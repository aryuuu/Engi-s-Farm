#include "Render.hpp"
#include <iostream>
#include <fstream>


// Compile
// g++ Cell.cpp Facility.cpp Land.cpp Facility/Mixer.cpp Facility/Truck.cpp Facility/Well.cpp Render.cpp -o nama_file

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
            this->farm[i][j] = new Land(true, i, j, "Coop");
        }
    }
}

/** Constructor: From file */
Render::Render(string filename)
{
    int count = 0;
    ifstream file(filename);
    string str;
    getline(file, str);
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

    file.clear();
    file.seekg(0, ios::beg);

    int i = 0;
    while (getline(file, str))
    {
      cout << str << endl;
      for (int j = 0; j < (this->maxY); j++)
      {
        cout << "Test in" << endl;
        if (str.at(j) == '*')
        {
          this->farm[i][j] = new Land(true, i, j, "Coop");
        }
        else if (str.at(j) == 'o')
        {
          this->farm[i][j] = new Land(false, i, j, "Coop");
        }
        else if (str.at(j) == '@')
        {
          this->farm[i][j] = new Land(true, i, j, "Barn");
        }
        else if (str.at(j) == 'x')
        {
          this->farm[i][j] = new Land(false, i, j, "Barn");
        }
        else if (str.at(j) == '#')
        {
          this->farm[i][j] = new Land(true, i, j, "Grassland");
        }
        else if (str.at(j) == '-')
        {
          this->farm[i][j] = new Land(false, i, j, "Grassland");
        }
        else if (str.at(j) == 'M')
        {
          this->farm[i][j] = new Mixer(i, j);
        }
        else if (str.at(j) == 'T')
        {
          this->farm[i][j] = new Truck(i, j);
        }
        else if (str.at(j) == 'W')
        {
          this->farm[i][j] = new Well(i, j);
        }
        else
        {
          cout << "All wrong" << endl;
        }
      }
      i++;
    }

    file.close();
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
// Nanti tambah AnimalContainer dan Player ke dalam ini
void Render::printAll()
{
    for(int i = 0;i < this->maxX;i++){
        for(int j = 0;j < this->maxY;j++){
            cout << (i + j);
            getLegendCell(i, j)->print();
            cout << " ";
        }
        std::cout<<std::endl;
    }
}
