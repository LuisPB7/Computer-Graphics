#ifndef PERSPECTIVECAMERA_H
#define PERSPECTIVECAMERA_H

#include <GL/glut.h>
#include "Camera.h"

class PerspectiveCamera: public Camera {
	private:
		double _fovy, _aspect;
	public:
		PerspectiveCamera(double fovy, double aspect, double zNear, double zFar);
		void update();
		void computeProjectionMatrix();
		void computeVisualizationMatrix();
		~PerspectiveCamera();
};

#endif
