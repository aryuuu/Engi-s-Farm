#include "Render.hpp"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

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
Render::Render(std::string filename)
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
    this->maxX = count + 1;

    this->farm = new Cell**[maxX];
    for (int i = 0; i < maxX; i++)
    {
        this->farm[i] = new Cell*[maxY];
    }

    file.clear();
    file.seekg(0, ios::beg);

    int i = 0;
    while (std::getline(file, str))
    {
      //cout << str << endl;
      for (int j = 0; j < this->maxY; j++)
      {
        // cout << str.at(j) << endl;
        if (str.at(j) == '*')
        {
          this->farm[i][j] = new Land(true, i, j, "Coop");
          // Land a(true, i, j, "Coop");
          // this->farm[i][j] = &a;
        }
        else if (str.at(j) == 'o')
        {
          //cout << "Test" << endl;
          //cout << i << " " << j << endl;
          this->farm[i][j] = new Land(false, i, j, "Coop");
          // Land a(false, i, j, "Coop");
          // this->farm[i][j] = &a;
        }
        else if (str.at(j) == '@')
        {
          this->farm[i][j] = new Land(true, i, j, "Barn");
          // Land a(true, i, j, "Barn");
          // this->farm[i][j] = &a;
        }
        else if (str.at(j) == 'x')
        {
          this->farm[i][j] = new Land(false, i, j, "Barn");
          // Land a(false, i, j, "Barn");
          // this->farm[i][j] = &a;
        }
        else if (str.at(j) == '#')
        {
          this->farm[i][j] = new Land(true, i, j, "Grassland");
          // Land a(true, i, j, "Grassland");
          // this->farm[i][j] = &a;
        }
        else if (str.at(j) == '-')
        {
          this->farm[i][j] = new Land(false, i, j, "Grassland");
          // Land a(false, i, j, "Grassland");
          // this->farm[i][j] = &a;
        }
        else if (str.at(j) == 'M')
        {
          this->farm[i][j] = new Mixer(i, j);
          // Mixer a(i, j);
          // this->farm[i][j] = &a;
        }
        else if (str.at(j) == 'T')
        {
          this->farm[i][j] = new Truck(i, j);
          // Truck a(i, j);
          // this->farm[i][j] = &a;
        }
        else if (str.at(j) == 'W')
        {
          this->farm[i][j] = new Well(i, j);
          // Well a(i, j);
          // this->farm[i][j] = &a;
        }
        else
        {
          cout << "All wrong" << endl;
        }
        //cout << j << endl;

      }
      i++;
      // cout << i << endl;
    }
    file.close();
    // cout << "Done" << endl;
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
    //cout << "Called getLegend: (" << x << "," << y << ")" << endl;
    return this->farm[x][y];
}

/** Print Map Ke Layar*/
// Nanti tambah AnimalContainer dan Player ke dalam ini
// void Render::printAll()
// {
//   // cout << "Called" << endl;
//     for(int i = 0;i < this->maxX;i++){
//       // cout << "Test i" << endl;
//         for(int j = 0;j < this->maxY;j++){
//             farm[i][j] -> print();
//         }
//         std::cout<<std::endl;
//     }
// }

bool Render::isValidPos(int x,int y)
{
  if (x >= 0 && x < this->maxX && y >= 0 && y < this->maxY)
  {
    return(this->farm[x][y]->getLegend() != "truck" && 
        this->farm[x][y]->getLegend() != "mixer" &&
        this->farm[x][y]->getLegend() != "well");
  } else {
    return false;
  }
}

bool Render::isWithinArea(int x, int y)
{
  return (x >= 0 && x < this->maxX && y >= 0 && y < this->maxY);
}

bool Render::isNear(int x,int y,std::string _legend)
{ 
  if (isWithinArea(x, (y + 1)) && this->farm[x][y + 1]->getLegend() == _legend)
  {
    return true;
  }
  else if (isWithinArea((x + 1), y) && this->farm[x + 1][y]->getLegend() == _legend)
  {
    return true;
  }
  else if (isWithinArea((x - 1), y) && this->farm[x - 1][y]->getLegend() == _legend)
  {
    return true;
  }
  else if (isWithinArea(x, (y - 1)) && this->farm[x][y - 1]->getLegend() == _legend)
  {
    return true;
  }
  else
  {
    return false;
  }
}
