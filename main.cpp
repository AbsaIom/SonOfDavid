#include "Character.hpp"
#include "Team.hpp"
#include "BattleMode.hpp"
int main(){

	Character x("Marian");
	x.Present();

	Character y,z,d;
	Character tab[4]={x,y,z,d};
	Team blue(tab);
	blue.Presentation();
	Character tab1[4]={y,z,d,x};
	Team red(tab1);
	BattleMode Battle(blue,red);
	Battle.Present();
	return 0;


}
