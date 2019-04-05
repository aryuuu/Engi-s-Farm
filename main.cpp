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
			if (AC.noAnimalOn(Position(P.getX(),P.getY()))&&R.isValidPos(P.getX(),P.getY())){
				P.playerMove('u');	
			}else{
				cout<<"Invalid Move"<<endl;
			}
		}else if(cmd=="l"){
			if (AC.noAnimalOn(Position(P.getX(),P.getY()))&&R.isValidPos(P.getX(),P.getY())){
				P.playerMove('l');	
			}else{
				cout<<"Invalid Move"<<endl;
			}
		}else if(cmd=="d"){
			if (AC.noAnimalOn(Position(P.getX(),P.getY()))&&R.isValidPos(P.getX(),P.getY())){
				P.playerMove('d');	
			}else{
				cout<<"Invalid Move"<<endl;
			}
		}else if(cmd=="r"){
			if (AC.noAnimalOn(Position(P.getX(),P.getY()))&&R.isValidPos(P.getX(),P.getY())){
				P.playerMove('r');	
			}else{
				cout<<"Invalid Move"<<endl;
			}
		}else if(cmd=="kill"){
			//udah dapet hewan x
			bool Killed=false;
			if(!AC.noAnimalNear()){
				if(!AC.noAnimalOn(Position(Pos.getAbsis()-1,Pos.getOrdinat()))&&!Killed){
					if (AC.findOnPos(Position(Pos.getAbsis()-1,Pos.getOrdinat()))->canBeKilled()){
						P.addProduct(AC.findOnPos(Position(Pos.getAbsis()-1,Pos.getOrdinat()))->killProduct());
						AC.removeAnimal(AC.findOnPos(Position(Pos.getAbsis()-1,Pos.getOrdinat())));
						Killed=true;
					}	
				}if(!AC.noAnimalOn(Position(Pos.getAbsis(),Pos.getOrdinat()-1))&&!Killed){
					if (AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()-1))->canBeKilled()){
						P.addProduct(AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()-1))->killProduct());
						Killed=true;
					}
				}if(!AC.noAnimalOn(Position(Pos.getAbsis(),Pos.getOrdinat()+1))&&!Killed){
					if (AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->canBeKilled()){
						P.addProduct(AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->killProduct());
						Killed=true;
					}
				}if(!AC.noAnimalOn(Position(Pos.getAbsis()+1,Pos.getOrdinat()))&&!Killed){
					if (AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->canBeKilled()){
						P.addProduct(AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->killProduct());
						Killed=true;
					}
				}
			}else{
				cout<<"Tidak ada hewan yang bisa dibunuh"<<endl;
			}
		}else if(cmd=="interact"){
			bool Interact = false;
			if(!AC.noAnimalNear()){
				if(!AC.noAnimalOn(Position(Pos.getAbsis()-1,Pos.getOrdinat()))&&!Interact){
					if (AC.findOnPos(Position(Pos.getAbsis()-1,Pos.getOrdinat()))->canBeInteracted()){
						P.addProduct(AC.findOnPos(Position(Pos.getAbsis()-1,Pos.getOrdinat()))->interactProduct());
						Interact = true;
					}	
				}if(!AC.noAnimalOn(Position(Pos.getAbsis(),Pos.getOrdinat()-1))&&!Interact){
					if (AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()-1))->canBeInteracted()){
						P.addProduct(AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()-1))->interactProduct());
						Interact = true;
					}
				}if(!AC.noAnimalOn(Position(Pos.getAbsis(),Pos.getOrdinat()+1))&&!Interact){
					if (AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->canBeInteracted()){
						P.addProduct(AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->interactProduct());
						Interact = true;
					}
				}if(!AC.noAnimalOn(Position(Pos.getAbsis()+1,Pos.getOrdinat()))&&!Interact){
					if (AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->canBeInteracted()){
						P.addProduct(AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->interactProduct());
						Interact = true;
					}
				}
			}if (R.isNear(P.getX(),P.getY(),"Well")&&!Interact) {
				P.addWater();
			}else if (R.isNear(P.getX(),P.getY(),"Truck")){
				P.delProductAll();
			}else if (R.isNear(P.getX(),P.getY(),"Mixer")){
					
			}
		}else if(cmd=="talk"){
			Position Pos(P.getX(),P.getY());
			if(!AC.noAnimalNear(Pos)){
				if(!AC.noAnimalOn(Position(Pos.getAbsis()-1,Pos.getOrdinat()))){
					cout<<AC.findOnPos(Position(Pos.getAbsis()-1,Pos.getOrdinat()))->animalType()<<" bersabda	:"<<AC.findOnPos(Position(Pos.getAbsis()-1,Pos.getOrdinat()))->sound()<<endl;	
				}else if(!AC.noAnimalOn(Position(Pos.getAbsis(),Pos.getOrdinat()-1))){
					cout<<AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()-1))->animalType()<<" bersabda	:"<<AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()-1))->sound()<<endl;
				}else if(!AC.noAnimalOn(Position(Pos.getAbsis(),Pos.getOrdinat()+1))){
					cout<<AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->animalType()<<" bersabda	:"<<AC.findOnPos(Position(Pos.getAbsis(),Pos.getOrdinat()+1))->sound()<<endl;
				}else if(!AC.noAnimalOn(Position(Pos.getAbsis()+1,Pos.getOrdinat()))){
					cout<<AC.findOnPos(Position(Pos.getAbsis()+1,Pos.getOrdinat()))->animalType()<<" bersabda	:"<<AC.findOnPos(Position(Pos.getAbsis()+1,Pos.getOrdinat()))->sound()<<endl;
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
		AC.allAnimalMove();
		AC.allAnimalHungrier();
		
	}
}
