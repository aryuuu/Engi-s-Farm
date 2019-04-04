#include "Land.hpp"
#include <iostream>

using namespace std;

//Ctor
Land::Land(bool isGrass, int x, int y) : Cell(x, y,"land")
{
    this->isGrass = isGrass;
}

/** Setter */

void Land::setIsGrass(bool isGrass)
{
    this->isGrass = isGrass;
}

/** Getter */

bool Land::getIsGrass()
{
    return this->isGrass;
}



/** Fungsi Print Isi dari Land */
void Land::print()
{
    if (this->isGrass)
    {
        cout << "^";
    }
    else
    {
        cout << " ";
    }
}

/** Fungsi Water untuk mengubah isGrass saat sebuah land disiram */
void Land::water()
{
    this->isGrass = true;
}
