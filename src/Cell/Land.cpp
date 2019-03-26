#include "Land.hpp"
#include <iostream>

using namespace std;

//Ctor
Land::Land(string legend, string category, bool isGrass, int x, int y):Cell(x,y),legend(legend)
{
    this->category = category;
    this->isGrass = isGrass;
}

/** Setter */
void Land::setCategory(std::string category)
{
    this->category = category;
}

void Land::setIsGrass(bool isGrass)
{
    this->isGrass = isGrass;
}

/** Getter */
string Land::getCategory()
{
    return this->category;
}

bool Land::getIsGrass()
{
}

/** Fungsi Print Isi dari Land */
void Land::print(AnimalContainer AC, Player P)
{
}

/** Fungsi Water untuk mengubah isGrass saat sebuah land disiram */
void Land::water()
{
}
