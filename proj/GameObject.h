#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <GL/glut.h>
#include "Entity.h"

class GameObject: public Entity {
	public:
		GameObject();
		void draw();
		void update(double delta_t);
		~GameObject();
};

#endif
