#ifndef VECTOR4_H
#define VECTOR4_H

#include <GL/glut.h>

class Vector4{
	protected:
		double _x, _y, _z,_w;

	public:
		Vector4();
		Vector4(double x, double y, double z, double w);
		void set(double x, double y, double z, double w);
		double getX();
		double getY();
		double getZ();
		double getW();
		~Vector4();
};

#endif
