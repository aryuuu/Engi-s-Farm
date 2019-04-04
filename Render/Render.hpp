/**
  * @file Render.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Render
  * @version 1
  * @date 2019-03-18
  */

#include "Land.hpp"
#include "Cell.hpp"
#include "./Facility/Mixer.hpp"
#include "./Facility/Truck.hpp"
#include "./Facility/Well.hpp"
#include "../Player.hpp"
#include "AnimalContainer.hpp"

#ifndef _RENDER_HPP
#define _RENDER_HPP

class Render
{
private:
    Cell::Cell *** farm; // Tempat Menyimpan Map dari Farm (Cell Harus Dibuat Pointer)
    // Penanda Max Element
    int maxX;
    int maxY;

public:
    /** Constructor */
    Render(int maxX,int maxY);

    /** Destructor */
    ~Render();

    /** Getter */
    int getMaxX();
    int getMaxY();
    Cell::Cell* getLegendCell(int x,int y);


    /** Print Map Ke Layar*/
    void print();

};

#endif
