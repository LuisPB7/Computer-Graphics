#include "LightSource.h"

LightSource::LightSource(GLenum number){
	_num = number;
}

void LightSource::getState(){
	return _state;
}

void LightSource::getNum(){
	return _num;
}

void LightSource::setState(bool state){
	_state = state;
}

void LightSource::setPosition(Vector4* position){
	_position = position;
}

void LightSource::setDirection(Vector3* direction){
	_direction = direction;
}

void LightSource::setCutOff(double cut_off){
	_cut_off = cut_off;
}

void LightSource::setExponent(double exponent){
	_exponent = exponent;
}

void LightSource::setAmbient(Vector4* ambient){
	_ambient[0] = ambient->getX();
	_ambient[1] = ambient->getY();
	_ambient[2] = ambient->getZ();
	_ambient[3] = ambient->getW();
}

void LightSource::setDiffuse(Vector4* diffuse){
	_diffuse[0] = diffuse->getX();
	_diffuse[1] = diffuse->getY();
	_diffuse[2] = diffuse->getZ();
	_diffuse[3] = diffuse->getW();
}

void LightSource::setSpecular(Vector4* specular){
	_specular[0] = specular->getX();
	_specular[1] = specular->getY();
	_specular[2] = specular->getZ();
	_specular[3] = specular->getW();
}

void LightSource::draw(){

}

LightSource::~LightSource(){}

