/**
  * @file Land.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Land
  * @version 1
  * @date 2019-03-18
  */

#include "../Cell.hpp"
#include "../AnimalContainer.hpp"
#include "../Player.hpp"

#ifndef _LAND_HPP
#define _LAND_HPP

class Land : public Cell
{
  private:
    const std::string legend ;
    std::string category;
    bool isGrass;
  public:
    //Ctor
    Land(std::string legend,std::string category,bool isGrass,int x,int y);

    /** Setter */
    void setCategory(std::string category);
    void setIsGrass(bool isGrass);

    /** Getter */
    std::string getCategory();
    bool getIsGrass();

    /** Fungsi Print Isi dari Land */
    void print(AnimalContainer AC,Player P);

    /** Fungsi Water untuk mengubah isGrass saat sebuah land disiram */
    void water();

};

#endif
