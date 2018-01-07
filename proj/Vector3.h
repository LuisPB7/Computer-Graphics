#ifndef VECTOR3_H
#define VECTOR3_H

#include <GL/glut.h>

class Vector3{
	protected:
		double _x, _y, _z;

	public:
		Vector3();
		Vector3(double x, double y, double z);
		void set(double x, double y, double z);
		double getX();
		double getY();
		double getZ();
		~Vector3();
};

#endif
