#include "AnimalContainer.cpp"
#include "Player.cpp"
#include "Render.cpp"
#include <iostream>
using namespace std;
int main(){
	string cmd;
	AnimalContainer AC;
	Player P();
	Render R(map.txt);
	while(1){
		R.printAll();
		P.print();
		cin>>cmd;
		if(cmd=="u"){
			
			P.playerMove('u');
		}else if(cmd=="l"){
			P.playerMove('l');
		}else if(cmd=="d"){
			P.playerMove('d');
		}else if(cmd=="r"){
			P.playerMove('r');
		}else if(cmd=="kill"){
			//udah dapet hewan x
			if(!AC.noAnimalNear()){
				if(!AC.noAnimalOn(Position(Pos.getAbsis()-1,Pos.getOrdinat()))){
					if (AC.findOnPos(Position(Pos.getAbsis()-1,Pos.getOrdinat()))->canBeKilled()){
						P.addProduct(AC.findOnPos(Position(Pos.getAbsis()-1,Pos.getOrdinat()))->killProduct());
					}	
				}else if(!AC.noAnimalOn(Position(Pos.getAbsis(),Pos.getOrdinat()-1))){
					if (AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()-1))->canBeKilled()){
						P.addProduct(AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()-1))->killProduct());
					}
				}else if(!AC.noAnimalOn(Position(Pos.getAbsis(),Pos.getOrdinat()+1))){
					if (AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->canBeKilled()){
						P.addProduct(AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->killProduct());
					}
				}else if(!AC.noAnimalOn(Position(Pos.getAbsis()+1,Pos.getOrdinat()))){
					if (AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->canBeKilled()){
						P.addProduct(AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->killProduct());
					}
				}
			}else{
				cout<<"Tidak ada hewan yang bisa dibunuh"<<endl;
			}
		}else if(cmd=="interact"){
			if(!AC.noAnimalNear()){
				if(!AC.noAnimalOn(Position(Pos.getAbsis()-1,Pos.getOrdinat()))){
					if (AC.findOnPos(Position(Pos.getAbsis()-1,Pos.getOrdinat()))->canBeInteracted()){
						P.addProduct(AC.findOnPos(Position(Pos.getAbsis()-1,Pos.getOrdinat()))->interactProduct());
					}	
				}else if(!AC.noAnimalOn(Position(Pos.getAbsis(),Pos.getOrdinat()-1))){
					if (AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()-1))->canBeInteracted()){
						P.addProduct(AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()-1))->interactProduct());
					}
				}else if(!AC.noAnimalOn(Position(Pos.getAbsis(),Pos.getOrdinat()+1))){
					if (AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->canBeInteracted()){
						P.addProduct(AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->interactProduct());
					}
				}else if(!AC.noAnimalOn(Position(Pos.getAbsis()+1,Pos.getOrdinat()))){
					if (AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->canBeInteracted()){
						P.addProduct(AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->interactProduct());
					}
				}
			}else{
				cout<<""<<endl;
			}
		}else if(cmd=="talk"){
			Position Pos(P.getX(),P.getY());
			if(!AC.noAnimalNear(Pos)){
				if(!AC.noAnimalOn(Position(Pos.getAbsis()-1,Pos.getOrdinat()))){
					AC.findOnPos(Position(Pos.getAbsis()-1,Pos.getOrdinat()))->sound();	
				}else if(!AC.noAnimalOn(Position(Pos.getAbsis(),Pos.getOrdinat()-1))){
					AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()-1))->sound();
				}else if(!AC.noAnimalOn(Position(Pos.getAbsis(),Pos.getOrdinat()+1))){
					AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->sound();
				}else if(!AC.noAnimalOn(Position(Pos.getAbsis()+1,Pos.getOrdinat()))){
					AC.findOnPos(Position(Pos.getAbsis()+1,Pos.getOrdinat()))->sound();
			}else{
				cout<<"Tidak ada hewan disekitar"<<endl;
			}
		}else if(cmd=="grow"){
			//masih bingung
			if(!R.getLegendCell(P.getX(),P.getY())->getIsGrass()){
				R.getLegendCell(P.getX(),P.getY())->setIsGrass(true);
			}else{
				cout<<"Rumput telah tumbuh"<<endl;
			}
		}else{
			cout<<"perintah salah"<<endl;
		}
	}
}
