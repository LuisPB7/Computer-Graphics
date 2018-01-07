#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <iostream>
#include <GL/glut.h>
#include <vector>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "Car.h"

double left = 0.0;
double right = 0.0;
double up = 0.0;
double down = 0.0;
Car* carro = new Car();

class GameManager: public Entity {
	private:
		//std::vector<Camera> _cameras;
		//std::vector<LightSource> _light_sources;
		std::vector<GameObject> _game_objects;
	public:
		GameManager();
		void display();
		void reshape(GLsizei w, GLsizei h);
		void onTimer();
		void idle();
		void update();
		void init();
		void addGameObject(GameObject object);
		void processSpecialKeys (int key, int mx, int my);
		void processKeys(unsigned char key, int x, int y);
		void processSpecialUpKeys (unsigned char key, int mx, int my);
		~GameManager();
};

#endif
