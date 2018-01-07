#include "GameManager.h"
#include <GL/glut.h>

GameManager::GameManager(){}

void GameManager::display(){
	 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	 glLoadIdentity();
	 glMatrixMode(GL_PROJECTION);
	 glLoadIdentity();
	 glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
	 glMatrixMode(GL_MODELVIEW);
	 glLoadIdentity();
	 glColor3f( 0.4, 0.6980, 1.0 );
	 glutSolidCube(1.5f);
     //drawPista();
     //drawOranges();
     //drawButter();
     //drawCar();
     //glTranslatef(-0.1f, 0.0f, 0.0f);
     glFlush();
     glutSwapBuffers();
}

void GameManager::reshape(GLsizei w, GLsizei h){
	float xmin = -2., xmax = 2., ymin = -2., ymax = 2.;
    float ratio = (xmax - xmin) / (ymax - ymin);
    float aspect = (float) w / h;
    if ( aspect > ratio )
    glViewport( (w-h*ratio)/2, 0, h*ratio, h);
    else
    glViewport( 0, (h-w/ratio)/2, w, w/ratio);
    glMatrixMode( GL_PROJECTION);
    glLoadIdentity();
    glMatrixMode( GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(xmin, xmax, ymin, ymax);
}

void GameManager::onTimer(){
    update();
}

void GameManager::idle(){

}

void GameManager::update(){
    if(left){
        carro->left();
    }
    if(right){
        carro->right();
    }
    if(up){
        carro->up();
    }
    if(down){
        carro->down();
    }
}

void processSpecialKeys (int key, int mx, int my) {
    switch(key){
	case GLUT_KEY_LEFT :
       left = 1;
        break;
	case GLUT_KEY_RIGHT :
       right = 1;
        break;
    case GLUT_KEY_UP :
       up = 1;
        break;
    case GLUT_KEY_DOWN :
        down = 1;
        break;
    default:
        break;
    }
}

void processKeys(unsigned char key, int x, int y) {
    if (key == 'A'){
		if(mode){
			mode--;
			glutPostRedisplay();
		}
		else{
			mode++;
			glutPostRedisplay();
		}
	}
}

void processSpecialUpKeys (unsigned char key, int mx, int my) {
	switch(key){
	case GLUT_KEY_LEFT :
       left = 0;
        break;
	case GLUT_KEY_RIGHT :
       right = 0;
        break;
    case GLUT_KEY_UP :
       up = 0;
        break;
    case GLUT_KEY_DOWN :
        down = 0;
        break;
    default:
        break;
    }
}

void GameManager::addGameObject(GameObject object){
    _game_objects.push_back(object);
}

void GameManager::init(){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (800, 800);
    glutInitWindowPosition (100, 100);
    glutCreateWindow("Micro Machines");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(processKeys);
    glutSpecialFunc(processSpecialKeys);
    glutSpecialUpFunc(processSpecialUpKeys);
    glutTimerFunc(200,onTimer,0);
    glutMainLoop();
}

GameManager::~GameManager(){}

