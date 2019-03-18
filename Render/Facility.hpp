/**
  * @file Facility.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Facility
  * @version 1
  * @date 2019-03-18
  */

#include "Cell.hpp"
#include "../Player.hpp"

#ifndef _FACILITY_HPP
#define _FACILITY_HPP

class Facility : public Cell
{
private:
    const std::string legend;
public:

    //Abstract Function
    virtual void print() = 0;
    virtual void action(Player& P) = 0;
};

#endif