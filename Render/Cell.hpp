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
    std::string legend;
public:

    /** Constructor */
    Cell(int x,int y, std::string legend);

    /** Getter */
    int getPosX();
    int getPosY();
    std::string getLegend();

    /** Setter */
    void setPosX(int x);
    void setPosY(int y);

    /** Abstract Function */
    virtual void print() = 0;
    virtual void growGrass();
    virtual void eatGrass();
};

#endif
