/**
  * @file Facility.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Facility
  * @version 1
  * @date 2019-03-18
  */

#include "Cell.hpp"

#ifndef _FACILITY_HPP
#define _FACILITY_HPP

class Facility : public Cell
{
  public:
    /* Constructor */
    Facility(int x, int y, std::string legend);

    //Abstract Function
    virtual void print() = 0;
    bool isGrassOn();

    void growGrass();

    void eatGrass();
};

#endif
