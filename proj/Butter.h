#ifndef BUTTER_H
#define BUTTER_H

#include <GL/glut.h>
#include "Obstacle.h"

class Butter: public Obstacle {
	public:
		Butter();
		void draw();
		~Butter();
};

#endif
