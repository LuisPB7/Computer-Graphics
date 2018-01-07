#ifndef LIGHTSOURCE_H
#define LIGHTSOURCE_H

#include <GL/glut.h>
#include "Vector3.h"
#include "Vector4.h"

class LightSource{
	private:
		Vector3 *_direction, *_position;
		double _ambient[4], _diffuse[4], _specular[4], _cut_off, _exponent;
		GLenum _num;
		bool _state;
	public:
		LightSource(GLenum number);
		bool getState();
		bool setState(bool state);
		GLenum getNum();
		void setPosition(Vector4* position);
		void setDirection(Vector3* direction);
		void setCutOff(double cut_off);
		void setExponent(double exponent);
		void setAmbient(Vector4* ambient);
		void setDiffuse(Vector4* diffuse);
		void setSpecular(Vector4* specular);
		void draw();
		~LightSource();
};

#endif
