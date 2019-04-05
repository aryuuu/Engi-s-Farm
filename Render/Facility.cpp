#include "Facility.hpp"

/** Constructor */
Facility::Facility(int x, int y, std::string legend) : Cell(x, y, legend)
{
}

bool Facility::isGrassOn()
{
    return false;
}

void Facility::growGrass()
{
    /** DO NOTHING */
}

void Facility::eatGrass()
{
    /** DO NOTHING */
}
