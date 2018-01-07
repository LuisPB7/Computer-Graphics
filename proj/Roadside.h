#ifndef ROADSIDE_H
#define ROADSIDE_H

#include <GL/glut.h>
#include "StaticObject.h"

class Roadside: public StaticObject {
	public:
		Roadside();
		void draw();
		~Roadside();
};

#endif
