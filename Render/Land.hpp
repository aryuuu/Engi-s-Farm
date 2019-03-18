#include "Cell.hpp"

#ifndef _LAND_HPP
#define _LAND_HPP

class Land : public Cell
{
  private:
    std::string legend;
    std::string category;
    bool isGrass;
  public:
    Land();
    Land(std::string legend,std::string category,bool isGrass);
};

#endif