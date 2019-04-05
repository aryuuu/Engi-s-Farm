#include "Facility.hpp"

/** Constructor */
Facility::Facility(int x, int y, std::string legend) : Cell(x, y, legend)
{
}

bool isGrass()
{
    return false;
}

void growGrass()
{
    /** DO NOTHING */
}

void eatGrass()
{
    /** DO NOTHING */
}
