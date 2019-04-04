/**
  * @file Well.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Well
  * @version 1
  * @date 2019-03-18
  */

#include "../Facility.hpp"

#ifndef _WELL_HPP
#define _WELL_HPP

class Well : public Facility
{
private:

public:
    //Ctor
    Well(int x,int y);

    /**Print Well Pada Layar*/
    void print();

};

#endif