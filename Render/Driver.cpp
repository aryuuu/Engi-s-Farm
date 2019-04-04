#include "./Land.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout<<"Testing Class Land"<<std::endl;

    Land L(false,1,1);
    std::cout<<"Posisi X: "<<L.getPosX()<<std::endl;
    std::cout<<"Posisi Y: "<<L.getPosY()<<std::endl;
    std::cout<<"IsGrass : "<<L.getIsGrass()<<std::endl;

    L.water();
    std::cout<<"IsGrass after water: "<<L.getIsGrass()<<std::endl;

    std::cout<<"After edit from setter :"<<std::endl;
    L.setPosX(2);
    L.setPosY(3);
    L.setIsGrass(false);
    
    std::cout<<"Posisi X: "<<L.getPosX()<<std::endl;
    std::cout<<"Posisi Y: "<<L.getPosY()<<std::endl;
    std::cout<<"IsGrass : "<<L.getIsGrass()<<std::endl;


    return 0;
}
