#ifndef ORTHOGONALCAMERA_H
#define ORTHOGONALCAMERA_H

#include <GL/glut.h>
#include "Camera.h"

class OrthogonalCamera: public Camera {
	private:
		double _left, _right, _bottom, _top;
	public:
		OrthogonalCamera(double left, double right, double bottom, double top, double near, double far);
		void update();
		void computeProjectionMatrix();
		void computeVisualizationMatrix();
		~OrthogonalCamera();
};

#endif
