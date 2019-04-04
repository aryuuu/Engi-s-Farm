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
protected:
    int x,y; // Position of the cell
public:

    /** Constructor */
    Cell(int x,int y);

    /** Getter */
    int getPosX();
    int getPosY();

    /** Setter */
    void setPosX(int x);
    void setPosY(int y);

};

#endif
