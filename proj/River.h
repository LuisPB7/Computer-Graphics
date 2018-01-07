#ifndef RIVER_H
#define RIVER_H

#include <GL/glut.h>
#include "StaticObject.h"

class River: public StaticObject {
	public:
		River();
		void draw();
		~River();
};

#endif
