//============================================================================
// Name        : Drunk.cpp
// Author      : AbsaIom
// Version     :
// Copyright   : Fuck you copywrites haters
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Vector.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
using namespace VEKTORND;
int cel, ilosc=0;
float krok;
float x, y;

/*
int main() {
	Vektor Glowny;//glowny wektor
	srand(time(0));
	cout << "Witaj, napisz na jaka odleglosc ma oddalic sie pijak i jaka jest dlugosc jego kroku :)\n";
	cin>>cel>>krok;
	while(Glowny.dlugosc()<=cel)
	{	ilosc++;

		x=rand()%1000;
		if(rand()%2==0){
			x=-x;
		}
		y=rand()%1000;
		if(rand()%2==0){
			y=-y;
		}
		Vektor tmp(x,y);
		tmp=tmp/tmp.dlugosc()*krok;
		Glowny=Glowny+tmp;
	}
	cout<<"pijak wyszedl poza w "<<ilosc<<"krokach\n";

	return 0;
}
*/

int main(){

	float x[3]={3,3,2};
	Vektor <float,3>  fx(x);


	return 0;
}
