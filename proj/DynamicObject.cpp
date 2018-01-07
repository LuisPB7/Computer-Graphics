#include "DynamicObject.h"

DynamicObject::DynamicObject(){}

void DynamicObject::update(double delta_t){
	
}

void DynamicObject::setSpeed(Vector3* speed){
	_speed = speed;
}

void DynamicObject::setSpeed(double x, double y, double z){
	_speed = new Vector3(x,y,z);
}

void DynamicObject::getSpeed(){
	return _speed;
}

DynamicObject::~DynamicObject(){}

