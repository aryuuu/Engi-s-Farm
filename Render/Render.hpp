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
#include "../AnimalContainer.hpp"
#include <string>

#ifndef _RENDER_HPP
#define _RENDER_HPP

class Render
{
private:
    Cell *** farm; // Tempat Menyimpan Map dari Farm (Cell Harus Dibuat Pointer)
    // Penanda Max Element
    int maxX;
    int maxY;

public:
    /** Constructor */
    Render(int maxX,int maxY);
    /** Constructor: From file */
    Render(string filename);

    /** Destructor */
    ~Render();

    /** Getter */
    int getMaxX();
    int getMaxY();
    Cell* getLegendCell(int x,int y);


    /** Print Map Ke Layar*/
    // Nanti tambah AnimalContainer dan Player ke dalam ini
    void printAll();

    /** isValidPosition */
    bool isValidPos(int x,int y);

    /** isNear */
    bool isNear(int x,int y,std::string legend);

};

#endif
