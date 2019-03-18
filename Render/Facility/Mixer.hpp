/**
  * @file Mixer.hpp
  * @author SubscribeToPewDiePie
  * @brief File berisi method dan atribut dari class Mixer
  * @version 1
  * @date 2019-03-18
  */

#include "../Facility.hpp"

#ifndef _MIXER_HPP
#define _MIXER_HPP

class Mixer : public Facility
{
private:

public:
    //Ctor
    Mixer(int x,int y);

    //Print Well Pada Layar
    void print();

    //Menggabunggkan Farm Product Menjadi Side Product
    void action(Player& P);
};

#endif