#ifndef DYNAMICOBJECT_H
#define DYNAMICOBJECT_H

#include <GL/glut.h>
#include "GameObject.h"

class StaticObject: public GameObject {
	public:
		StaticObject();
		~StaticObject();
};

#endif
