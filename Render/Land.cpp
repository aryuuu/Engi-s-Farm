#include "Land.hpp"
#include <iostream>
#include <string>

using namespace std;

//Ctor
Land::Land(bool isGrass, int x, int y, std::string _legend) : Cell(x, y, _legend)
{
    // cout << "Land called" << endl;
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
    if (this->legend == "Coop")
    {
        if (isGrass)
        {
            cout << "*";
        }
        else
        {
            cout << "o";
        }
    }
    else if (this->legend == "Barn")
    {
        if (isGrass)
        {
            cout << "@";
        }
        else
        {
            cout << "x";
        }
    }
    else if (this->legend == "Grassland")
    {
        if (isGrass)
        {
            cout << "#";
        }
        else
        {
            cout << "-";
        }
    }
    else
    {
        cout << " ";
    }
}

bool Land::isGrassOn()
{
    return this->isGrass;
}

void Land::growGrass()
{
    this->isGrass = true;
}

void Land::eatGrass()
{
    this->isGrass = false;
}