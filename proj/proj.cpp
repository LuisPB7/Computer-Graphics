#include <GL/glut.h>
#include "GameManager.h"

/*void drawPista(){
	 glTranslatef(-0.45, -0.50, 0);
	 float y = 0.05;
	 for(int i = 0; i < 19; i++){
		  glTranslatef(0,y,0);
		  glColor3f(0.8, 0.4,0);
		  glutSolidTorus(0.005f, 0.03f, 32, 32);
	 }

	 float x = 0.05;
	 for(int i = 0; i < 18; i++){
		  glTranslatef(x,0,0);
		  glColor3f(0.8, 0.4,0);
		  glutSolidTorus(0.005f, 0.03f, 32, 32);
	 }

	 for(int i = 0; i < 18; i++){
		  glTranslatef(0,-y,0);
		  glColor3f(0.8, 0.4,0);
		  glutSolidTorus(0.005f, 0.03f, 32, 32);
	 }

	 for(int i = 0; i < 18; i++){
		  glTranslatef(-x,0,0);
		  glColor3f(0.8, 0.4,0);
		  glutSolidTorus(0.005f, 0.03f, 32, 32);
	 }
	 glTranslatef(0.2, 0.17, 0);
	 for(int i = 0; i < 11; i++){
		  glTranslatef(0,y,0);
		  glColor3f(0.8, 0.4,0);
		  glutSolidTorus(0.005f, 0.03f, 32, 32);
	 }

	 for(int i = 0; i < 10; i++){
		  glTranslatef(x,0,0);
		  glColor3f(0.8, 0.4,0);
		  glutSolidTorus(0.005f, 0.03f, 32, 32);
	 }

	 for(int i = 0; i < 11; i++){
		  glTranslatef(0,-y,0);
		  glColor3f(0.8, 0.4,0);
		  glutSolidTorus(0.005f, 0.03f, 32, 32);
	 }

	 for(int i = 0; i < 10; i++){
		  glTranslatef(-x,0,0);
		  glColor3f(0.8, 0.4,0);
		  glutSolidTorus(0.005f, 0.03f, 32, 32);
	 }
}*/


int main(int argc, char* argv[]){
  GameManager* GM = new GameManager();
  GM->init();
  return 0;
}
