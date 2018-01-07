#include "PerspectiveCamera.h"

PerspectiveCamera::PerspectiveCamera(double fovy, double aspect, double zNear, double zFar){
	_fovy = fovy;
	_aspect = aspect;
	_near = zNear;
	_far = zFar;
}

void PerspectiveCamera::computeProjectionMatrix(){

}

void Perspective::computeVisualizationMatrix(){

}

void PerspectiveCamera::update(){

}

PerspectiveCamera::~PerspectiveCamera(){}

