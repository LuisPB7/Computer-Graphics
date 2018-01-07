#ifndef ENTITY_H
#define ENTITY_H

#include <GL/glut.h>
#include "Vector3.h"

class Entity{
	private:
		Vector3* _position;

	public:
		Entity();
		Vector3* getPosition();
		void setPosition(double x, double y, double z);
		void setPosition(Vector3* p);
		~Entity();
};

#endif
