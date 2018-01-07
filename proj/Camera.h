#ifndef CAMERA_H
#define CAMERA_H

#include <GL/glut.h>
#include "Entity.h"

class Camera: public Entity {
	private:
		Vector3 *_up, *_center, *_at;
	protected:
		double _near, _far;
	public:
		Camera(double near, double far);
		void update();
		void ComputeProjectionMatrix();
		void ComputeVisualizationMatrix();
		~Camera();
};

#endif
