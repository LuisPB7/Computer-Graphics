#ifndef DYNAMICOBJECT_H
#define DYNAMICOBJECT_H

#include <GL/glut.h>
#include "GameObject.h"

class DynamicObject: public GameObject {
	private:
		Vector3* _speed;
	public:
		DynamicObject();
		void update(double delta_t);
		void setSpeed(Vector3* speed);
		void setSpeed(double x, double y, double z);
		Vector3* getSpeed();
		~DynamicObject();
};

#endif
