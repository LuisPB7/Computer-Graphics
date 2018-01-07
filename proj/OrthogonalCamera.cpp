#include "OrthogonalCamera.h"

OrthogonalCamera::OrthogonalCamera(double left, double right, double bottom, double top, double near, double far){
	_left = left;
	_right = right;
	_bottom = bottom;
	_top = top;
	_near = near;
	_far = far;
}

void OrthogonalCamera::computeProjectionMatrix(){

}

void OrthogonalCamera::computeVisualizationMatrix(){

}

void OrthogonalCamera::update(){

}

OrthogonalCamera::~OrthogonalCamera(){}

