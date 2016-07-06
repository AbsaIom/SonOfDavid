#ifndef VEKTOR_HH
#define VEKTOR_HH

#include <cmath>

namespace VEKTOR2D{

class Vektor{
float _x, _y;
public:
Vektor(int a,int b){
	_x=a;
	_y=b;
}
Vektor(){
	_x=_y=0;
}

int  x(){
return _x;
}

int  y(){
return _y;
}

Vektor operator+(const Vektor & arg2){
	Vektor tmp;
	tmp._x=_x+arg2._x;
	tmp._y=_y+arg2._y;
	return tmp;
}

Vektor operator-(const Vektor & arg2)
{Vektor tmp;
tmp._x=_x-arg2._x;
tmp._y=_y-arg2._y;
return tmp;
}

float skalar(const Vektor & arg2){
	float skal;
	skal=_x*arg2._x+_y+arg2._y;
	return skal;
}
float dlugosc(){
	float tmp;
	tmp = _x*_x+_y*_y;
	tmp=sqrt(tmp);
	return tmp;
}

Vektor operator/(float dz){
Vektor  tmp;
tmp._x=_x/dz;
tmp._y=_y/dz;
return tmp;
}

Vektor operator*(float dz){
Vektor  tmp;
tmp._x=_x*dz;
tmp._y=_y*dz;
return tmp;
}


};
}







//////////////////////////////////////////////////////////////////////////////////////////////////////////Wektor n elementowy
namespace VEKTORND{



template<typename klasa, int rozmiar>
class Vektor{
	klasa skladowa[rozmiar];
public:

	// oparatory wyłuskania


	klasa & operator[](int indeks){
		return skladowa[indeks];
	}
	const klasa & operator[](int indeks){
		return skladowa[indeks];
	}


	const klasa & operator+(const Vektor & arg2){
		Vektor tmp;
		for(int i=0;i<rozmiar;i++){
			tmp.skladowa[i]=skladowa[i]+arg2.skladowa[i];
		}
		return tmp;
	}

	float  operator*(const Vektor & arg2){ //iloczyn skalarny;
		float tmp=0;
		for(int i=0;i<rozmiar;i++){
			tmp+=arg2.skladowa[i]*skladowa[i];
		}
		return tmp;
	}







};
}


#endif





































