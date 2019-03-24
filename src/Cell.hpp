/**
  * @file Cell.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Cell
  * @version 1
  * @date 2019-03-18
  */

#include <iostream>

#ifndef _CELL_HPP
#define _CELL_HPP

class Cell
{
private:
    int x,y; // Position of the cell
public:

    /** Getter */
    int getPosX();
    int getPosY();

    /** Setter */
    void setPosX();
    void setPosY();

    /** Abstract Function */
    virtual void print() = 0;
};

#endif
