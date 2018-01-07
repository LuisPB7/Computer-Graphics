#include "Car.h"

Car::Car(){
    setPosition(new Vector3(0.35, -0.25, 0.5));
}

void Car::draw(){
    glLoadIdentity();
    glPushMatrix();
    glTranslated(getPosition().getX(),getPosition().getY(),0);
    glRotated(rotangle-90,0,0,1);
    glScalef(1.0f, 3.0f, 1.0f);
    glutSolidCube(0.05);
    glPopMatrix();
}

void Car::left(){
    rotAngle += 10;
    setPosition((getPosition().getX()) + cos(rotAngle*(M_PI/180)) * speed, (getPosition().getY()) + sin(rotAngle*(M_PI/180)) * speed, getPosition().getZ());
}

void Car::right(){
    rotAngle -= 10;
    setPosition((getPosition().getX()) + cos(rotAngle*(M_PI/180)) * speed, (getPosition().getY()) + sin(rotAngle*(M_PI/180)) * speed, getPosition().getZ());
}

void Car::up(){
    if(speed > -0.2 && speed < 0.2){
        speed = speed + acceleration;
    }
    setPosition((getPosition().getX()) + cos(rotAngle*(M_PI/180)) * speed, (getPosition().getY()) + sin(rotAngle*(M_PI/180)) * speed, getPosition().getZ());
}

void Car::down(){
    if(speed > -0.2 && speed < 0.2){
        speed = speed - acceleration;
    }
    setPosition((getPosition().getX()) + cos(rotAngle*(M_PI/180)) * speed, (getPosition().getY()) + sin(rotAngle*(M_PI/180)) * speed, getPosition().getZ());
}

Car::~Car(){}

