#include "Land.hpp"
#include <iostream>
#include <string>

using namespace std;

//Ctor
Land::Land(bool isGrass, int x, int y, std::string _kategori) : Cell(x, y,"land")
{
    this->isGrass = isGrass;
    this->kategori = _kategori;
}

/** Setter */

void Land::setIsGrass(bool isGrass)
{
    this->isGrass = isGrass;
}
void Land::setKategori(std::string kategori)
{
    this->kategori = kategori;
}

/** Getter */

bool Land::getIsGrass()
{
    return this->isGrass;
}
std::string Land::getKategori()
{
    return this->kategori;
}



/** Fungsi Print Isi dari Land */
void Land::print()
{
    if (this->kategori == "Coop")
    {
      if (isGrass)
      {
        cout << "*";
      } else {
        cout << "o";
      }
    }
    else if (this->kategori == "Barn")
    {
      if (isGrass)
      {
        cout << "@";
      } else {
        cout << "x";
      }
    }
    else if (this->kategori == "Grassland")
    {
      if (isGrass)
      {
        cout << "#";
      } else {
        cout << "-";
      }
    } else {
      cout << " ";
    }
}

/** Fungsi Water untuk mengubah isGrass saat sebuah land disiram */
void Land::water()
{
    this->isGrass = true;
}
