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
	bool isGrass;

  public:
	//Ctor
	Land(bool isGrass, int x, int y, std::string _legend);

	/** Setter */
	void setIsGrass(bool isGrass);

	/** Getter */
	bool getIsGrass();

	/** Fungsi Print Isi dari Land */
	void print();

	bool isGrassOn();

	void growGrass();

	void eatGrass();

};

#endif
