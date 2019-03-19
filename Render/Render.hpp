/**
  * @file Render.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Render
  * @version 1
  * @date 2019-03-18
  */

#include "Cell.hpp"

#ifndef _RENDER_HPP
#define _RENDER_HPP

class Render
{
private:
    Cell ** farm; // Tempat Menyimpan Map dari Farm (Cell Harus Dibuat Pointer)
    // Penanda Max Element
    int maxX;
    int maxY;
public:
    //Ctor
    Render(int maxX,int maxY);

    /** Getter */
    int getMaxX();
    int getMaxY();
    std::string getLegendCell(int x,int y);

    /** Setter */
    void setMaxX(int x);
    void setMaxY(int y);
    void setLegendCell(std::string Legend,int x,int y);

    /** Print Map Ke Layar*/
    void print();
};

#endif