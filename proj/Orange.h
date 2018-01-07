#ifndef ORANGE_H
#define ORANGE_H

#include <GL/glut.h>
#include "Obstacle.h"

class Orange: public Obstacle {
	public:
		Orange();
		void draw();
		~Orange();
};

#endif
