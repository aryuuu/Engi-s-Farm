/**
  * @file Land.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Land
  * @version 1
  * @date 2019-03-18
  */

#include "Cell.hpp"

#ifndef _LAND_HPP
#define _LAND_HPP

class Land : public Cell
{
  private:
    std::string kategori;
    bool isGrass;
  public:
    //Ctor
    Land(bool isGrass,int x,int y, std::string _kategori);

    /** Setter */
    void setIsGrass(bool isGrass);
    void setKategori(std::string kategori);

    /** Getter */
    bool getIsGrass();
    std::string getKategori();

    /** Fungsi Print Isi dari Land */
    void print();

    /** Fungsi Water untuk mengubah isGrass saat sebuah land disiram */
    void water();

};

#endif
