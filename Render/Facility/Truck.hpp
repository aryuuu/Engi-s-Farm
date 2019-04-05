/**
  * @file Truck.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Truck
  * @version 1
  * @date 2019-03-18
  */

#include "../Facility.hpp"

#ifndef _TRUCK_HPP
#define _TRUCK_HPP

class Truck : public Facility
{
private:

public:
    //Ctor
    Truck(int x,int y);

    /**Print Well Pada Layar*/
    void print();
    
};

#endif