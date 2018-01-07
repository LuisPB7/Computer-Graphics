#include "Vector4.h"

Vector4::Vector4(double x, double y, double z, double w){
  _x = x;
  _y = y;
  _z = z;
  _w = w;
}

void Vector4::set(double x, double y, double z, double w){
	_x = x;
	_y = y;
	_z = z;
	_w = w;
}

double Vector4::getX(){
	return _x;
}

double Vector4::getY(){
	return _y;
}

double Vector4::getZ(){
	return _z;
}

double Vector4::getW(){
	return _w;
}

Vector4::~Vector4(){}

