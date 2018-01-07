#ifndef CAR_H
#define CAR_H

#include <GL/glut.h>
#include "DynamicObject.h"

double rotAngle = 0;
double speed = 0;
double acceleration = 0.01;
double speedLimit = 0.2;

class Car: public DynamicObject {
	public:
		Car();
		void draw();
		void left();
		void right();
		void up();
		void down();
		~Car();
};

#endif
