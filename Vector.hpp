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
