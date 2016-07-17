#ifndef TEAM_HH
#define TEAM_HH
#define SIZE 4
#include "Character.hpp"

class Team{
private:
	Character * Members[SIZE];

public:
	//konstruktor Klasy Team
	Team(Character * _Members){
		for(int i=0; i<SIZE;++i){
			Members[i]=_Members+i;
		}
	}

	Team(){
		for(int i=0 ; i<SIZE ;i++){
			this->Members[i]=new Character;
		}
		std::cerr<<"Utworzono pusta drużyne";
	}


	Character * operator[](int Index){
		return Members[Index];
	}


	//metoda sprawdzajaca czy wszyscy zgineli
	bool isTeamDead(){
		int i=0;
		for(int j=0;j<SIZE;j++){
			if(Members[j]->isdead()){
				++i;
			}
		}

		if(i==4)
			return true;
		else
			return false;

	}

	~Team(){}
	//funkcja testowa do  prezetnowania druzyny
	void Presentation(){
		for(int i=0;i<SIZE;++i){
			Members[i]->Present();
		}
	}




};





#endif
