#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<stdio.h>
#include<math.h>
#define PI 3.1416

float cx=0, cy=0, angle=0;
float sx=0.04, sy=0.04;
float carx=0, cary=0;

void init()
{
    glClearColor(0.5294117647f, 0.8078431373f, 0.9215686275f,0.0f);
    glOrtho(-10,+10,-10,+10,-10,+10);

}

void CircleP(float radiusX,float radiusY)
{
    int i=0;
    float angle= 0;

    glBegin(GL_POLYGON);
    for(i=0;i<100;i++)
    {
        angle=2*PI*i/100;
        glVertex2d(radiusX*cos(angle),radiusY*sin(angle));
        //printf("Angle : %f , X-Axis : %f , Y-Axis : %f\n",angle,radiusX*cos(angle),radiusY*sin(angle));

    }
    glEnd();

}

void Car()
{
    if(carx>12)
    {
        carx=-10;
    }
    angle=angle-0.5;
    carx=carx+0.015;
    glutPostRedisplay();
}


void rotateC()
{
    if(cx>12)
    {
        cx=-10;
    }
    cx=cx+0.002;
    glutPostRedisplay();
}
void rotateD()
{
    if(sx>12)
    {
        sx=-10;
    }
    sx=sx+0.002;
    glutPostRedisplay();
}


void normalKey(unsigned char key, int x, int y)
{
    switch(key){

    case 'a':// cloud and boat

        glutIdleFunc(rotateC);
        break;
        case 'b':// cloud and boat

        glutIdleFunc(rotateD);
        break;

        case 'v':
        glutIdleFunc(Car);
        break;

        case 's':
        glutIdleFunc(NULL);

        glutPostRedisplay();
        break;


      default:
        break;

}
}
//..........................................................................instraction for car
void specialKey(int key,int x, int y)
{

    switch(key){

    case GLUT_KEY_LEFT:
        carx--;
        glutPostRedisplay();
        break;

    case GLUT_KEY_RIGHT:
        carx++;
        glutPostRedisplay();
        break;
        default:
        break;
    }
}
void CircleL(float radiusX,float radiusY)
{
    int i=0;
    float angle= 0;

    glBegin(GL_LINE_LOOP);
    for(i=0;i<100;i++)
    {
        angle=2*PI*i/100;
        glVertex2d(radiusX*cos(angle),radiusY*sin(angle));
        //printf("Angle : %f , X-Axis : %f , Y-Axis : %f\n",angle,radiusX*cos(angle),radiusY*sin(angle));

    }
    glEnd();

}

//...................for car
void CircleC(float radiusX,float radiusY)
{
    int i=0;
    float angle= 0;

    glBegin(GL_POLYGON);
    for(i=0;i<50;i++)
    {
        angle=2*PI*i/100;
        glVertex2d(radiusX*cos(angle),radiusY*sin(angle));
        //printf("Angle : %f , X-Axis : %f , Y-Axis : %f\n",angle,radiusX*cos(angle),radiusY*sin(angle));

    }
    glEnd();

}



void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

       //Sun
        glPushMatrix();
        glTranslated(7.8,8.5,0);
        glScaled(0.60,0.60,0);
        glColor3f(1,1,0);
        CircleP(1,1.75);
        glPopMatrix();
        glEnd();


        //Cloud 1
        glPushMatrix();
        glTranslated(cx,cy,0);

        glPushMatrix();
        glTranslated(0,8.5,0);
        glScaled(0.3,0.4,0);

        glPushMatrix();
        glTranslated(0,-0.2,0);
        glColor3f(0.96,0.96,0.96);
        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(6,0);
        glVertex2d(3,2);
        glEnd();
        glPopMatrix();


        glPushMatrix();
        glTranslated(3,1.7,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(0.8,0.8);
        glPopMatrix();

        glPushMatrix();
        glTranslated(0.1,0.5,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(0.7,0.7);
        glPopMatrix();

        glPushMatrix();
        glTranslated(5.9,0.5,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(0.7,0.7);
        glPopMatrix();

        glPushMatrix();
        glTranslated(1,0.5,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(0.5,0.5);
        glPopMatrix();

        glPushMatrix();
        glTranslated(1.6,1,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(0.5,0.5);
        glPopMatrix();


        glPushMatrix();
        glTranslated(2.4,1.1,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(0.5,0.5);
        glPopMatrix();


        glPushMatrix();
        glTranslated(5,0.5,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(0.5,0.5);
        glPopMatrix();

        glPushMatrix();
        glTranslated(4.5,1,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(0.5,0.5);
        glPopMatrix();


        glPushMatrix();
        glTranslated(3.7,0.9,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(0.5,0.5);
        glPopMatrix();

        glEnd();
        glPopMatrix();

        glPopMatrix();


        //Cloud 2

        glPushMatrix();
        glTranslated(cx,cy,0);

        glPushMatrix();
        glTranslated(-4,6,0);
        glScaled(0.3,0.3,0);

//......................................
        glPushMatrix();
        glTranslated(0,-0.2,0);
        glColor3f(0.96,0.96,0.96);
        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(6,0);
        glVertex2d(3,2);
        glEnd();
        glPopMatrix();

        //..........
        glPushMatrix();
        glTranslated(0.2,0.9,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(1,1.1);
        glPopMatrix();

        glPushMatrix();
        glTranslated(1.3,2,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(1,1.8);
        glPopMatrix();


        glPushMatrix();
        glTranslated(2.7,1.4,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(.5,1);
        glPopMatrix();

        glPushMatrix();
        glTranslated(3.5,1.8,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(.5,1);
        glPopMatrix();

        glPushMatrix();
        glTranslated(4.8,1.5,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(1,1.6);
        glPopMatrix();

        glPushMatrix();
        glTranslated(5.8,0.8,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(1,1);
        glPopMatrix();

        glPopMatrix();


        glPopMatrix();


        //Cloud 3

        glPushMatrix();
        glTranslated(cx,cy,0);

        glPushMatrix();
        glTranslated(5,6,0);
        glScaled(0.3,0.3,0);

//......................................
        glPushMatrix();
        glTranslated(0,-0.2,0);
        glColor3f(0.96,0.96,0.96);
        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(6,0);
        glVertex2d(3,2);
        glEnd();
        glPopMatrix();

        //..........
        glPushMatrix();
        glTranslated(0.2,0.9,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(1,1.1);
        glPopMatrix();

        glPushMatrix();
        glTranslated(1.3,2,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(1,1.8);
        glPopMatrix();


        glPushMatrix();
        glTranslated(2.7,1.4,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(.5,1);
        glPopMatrix();

        glPushMatrix();
        glTranslated(3.5,1.8,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(.5,1);
        glPopMatrix();

        glPushMatrix();
        glTranslated(4.8,1.5,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(1,1.6);
        glPopMatrix();

        glPushMatrix();
        glTranslated(5.8,0.8,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(1,1);
        glPopMatrix();

        glPopMatrix();


        glPopMatrix();
        //............................cloud4


        glPushMatrix();
        glTranslated(cx,cy,0);

        glPushMatrix();
        glTranslated(-9,8,0);
        glScaled(0.3,0.3,0);

//......................................
        glPushMatrix();
        glTranslated(0,-0.2,0);
        glColor3f(0.96,0.96,0.96);
        glBegin(GL_POLYGON);
        glVertex2d(0,0);
        glVertex2d(6,0);
        glVertex2d(3,2);
        glEnd();
        glPopMatrix();

        //..........
        glPushMatrix();
        glTranslated(0.2,0.9,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(1,1.1);
        glPopMatrix();

        glPushMatrix();
        glTranslated(1.3,2,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(1,1.8);
        glPopMatrix();


        glPushMatrix();
        glTranslated(2.7,1.4,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(.5,1);
        glPopMatrix();

        glPushMatrix();
        glTranslated(3.5,1.8,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(.5,1);
        glPopMatrix();

        glPushMatrix();
        glTranslated(4.8,1.5,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(1,1.6);
        glPopMatrix();

        glPushMatrix();
        glTranslated(5.8,0.8,0);
        glColor3f(0.96,0.96,0.96);
        CircleP(1,1);
        glPopMatrix();

        glPopMatrix();


        glPopMatrix();


        //-----cloud end-------





//.........................river...........
glPushMatrix();
        glTranslated(0,-7,0);
        glBegin(GL_POLYGON);

        glColor3f(0,0.75,1);
        glVertex2d(10,0);
        glVertex2d(-10,0);
        glVertex2d(-10,7);
        glVertex2d(10,7);

        glEnd();
        glPopMatrix();

//........................................river end..................
//boat
        glPushMatrix();
        glTranslated(sx,sy,0);
//boat1
        glPushMatrix();
        glTranslated(0,-1,0);
         glScaled(0.90,0.60,0);
         glRotated(180,0,0,1);
        glColor3f(0.82,0.411,0.12);
        CircleC(1,1.75);
        glPopMatrix();

         glPushMatrix();
        glTranslated(-1.5,-1,0);
        glColor3f(1,1,0);

        glBegin(GL_POLYGON);

        glVertex2d(1,0);
        glVertex2d(1.8,0);
        glVertex2d(1.8,1);

        glEnd();

        glPopMatrix();
        //...............................boat2
        glPushMatrix();
        glTranslated(-7,0,0);
         glScaled(0.90,0.60,0);
         glRotated(180,0,0,1);
        glColor3f(1,0.27,0);
        CircleC(1,1.75);
        glPopMatrix();

         glPushMatrix();
        glTranslated(-8.5,0,0);
        glColor3f(0,0,1);

        glBegin(GL_POLYGON);

        glVertex2d(1,0);
        glVertex2d(1.8,0);
        glVertex2d(1.8,1);

        glEnd();

        glPopMatrix();
 glPushMatrix();
        glTranslated(7,0,0);
         glScaled(0.90,0.60,0);
         glRotated(180,0,0,1);
        glColor3f(1,0,0);
        CircleC(1,1.75);
        glPopMatrix();

         glPushMatrix();
        glTranslated(5.5,0,0);
        glColor3f(1,1,1);

        glBegin(GL_POLYGON);

        glVertex2d(1,0);
        glVertex2d(1.8,0);
        glVertex2d(1.8,1);

        glEnd();

        glPopMatrix();


 glPopMatrix();


        //....................................................................
        //tree
        //treeroot
        glPushMatrix();
        glTranslated(-8,2.6,0);
         glScaled(1.6,0.8,1);



        glPushMatrix();
        glTranslated(0,-4,0);

        glPushMatrix();
        glTranslated(0,-4,0);
        glBegin(GL_POLYGON);

        glColor3f(0.627,0.321,0.176);
        glVertex2d(0,7);
        glVertex2d(-.25,7);
        glVertex2d(-.25,0);
        glVertex2d(0,0);
        glEnd();
        glPopMatrix();

        glPushMatrix();
        glTranslated(-0.125,-4,0);
        glBegin(GL_POLYGON);

        glColor3f(0.627,0.321,0.176);
        glVertex2d(0.25,0);
        glVertex2d(-0.25,0);
        glVertex2d(-0.125,0.5);
        glVertex2d(0.125,0.5);
        glEnd();
        glPopMatrix();

        glPopMatrix();

        //rightslopes
        glPushMatrix();
        glTranslated(0,-2,0);
        glBegin(GL_POLYGON);

        glColor3f(0.627,0.321,0.176);
        glVertex2d(0,0);
        glVertex2d(.5,1);
        glVertex2d(.5,1.5);
        glVertex2d(0,0.5);
        glEnd();
        glPopMatrix();

        //leftslopes
        glPushMatrix();
        glTranslated(-0.125,-2.5,0);
        glBegin(GL_POLYGON);

        glColor3f(0.627,0.321,0.176);
        glVertex2d(0,0);
        glVertex2d(-.5,1);
        glVertex2d(-.5,1.5);
        glVertex2d(0,0.5);
        glEnd();
        glPopMatrix();


        //circles
        glPushMatrix();
        glTranslated(-0.125,0,0);
        glColor3f(0.133,0.545,0.133);
        CircleP(1,2);
        glPopMatrix();
        glEnd();

        //circles
        glPushMatrix();
        glTranslated(-0.5,-2,0);
        glColor3f(0.133,0.545,0.133);
        CircleP(.25,1);
        glPopMatrix();
        glEnd();
        glPushMatrix();
        glTranslated(-0.5,-2,0);
        glColor3f(0,0,0);
        CircleL(.25,1);
        glPopMatrix();
        glEnd();

        //circles
        glPushMatrix();
        glTranslated(-0.90,-1.50,0);
        glColor3f(0.133,0.545,0.133);
        CircleP(0.25,1);
        glPopMatrix();
        glEnd();
        glPushMatrix();
        glTranslated(-0.90,-1.50,0);
        glColor3f(0,0,0);
        CircleL(0.25,1);
        glPopMatrix();
        glEnd();

        //circles
        glPushMatrix();
        glTranslated(-1.25,-0.5,0);
        glColor3f(0.133,0.545,0.133);
        CircleP(0.25,1);
        glPopMatrix();
        glEnd();
        glPushMatrix();
        glTranslated(-1.25,-0.5,0);
        glColor3f(0,0,0);
        CircleL(0.25,1);
        glPopMatrix();
        glEnd();

        //circles
        glPushMatrix();
        glTranslated(-1.10,1.10,0);
        glColor3f(0.133,0.545,0.133);
        CircleP(0.5,1);
        glPopMatrix();
        glEnd();
        glPushMatrix();
        glTranslated(-1.10,1.10,0);
        glColor3f(0,0,0);
        CircleL(0.5,1);
        glPopMatrix();
        glEnd();

        //circles
        glPushMatrix();
        glTranslated(-.90,2,0);
        glColor3f(0.133,0.545,0.133);
        CircleP(0.25,1);
        glPopMatrix();
        glEnd();
        glPushMatrix();
        glTranslated(-.90,2,0);
        glColor3f(0,0,0);
        CircleL(0.25,1);
        glPopMatrix();
        glEnd();

        //circles
        glPushMatrix();
        glTranslated(-.5,2.5,0);
        glColor3f(0.133,0.545,0.133);
        CircleP(0.25,1);
        glPopMatrix();
        glEnd();
        glPushMatrix();
        glTranslated(-.5,2.5,0);
        glColor3f(0,0,0);
        CircleL(0.25,1);
        glPopMatrix();
        glEnd();

        //circles
        glPushMatrix();
        glTranslated(-.125,2.75,0);
        glColor3f(0.133,0.545,0.133);
        CircleP(0.25,1);
        glPopMatrix();
        glEnd();
        glPushMatrix();
        glTranslated(-.125,2.75,0);
        glColor3f(0,0,0);
        CircleL(0.25,1);
        glPopMatrix();
        glEnd();

        //circles
        glPushMatrix();
        glTranslated(0.25,2.5,0);
        glColor3f(0.133,0.545,0.133);
        CircleP(0.255,1.5);
        glPopMatrix();
        glEnd();
        glPushMatrix();
        glTranslated(0.25,2.5,0);
        glColor3f(0,0,0);
        CircleL(0.255,1.5);
        glPopMatrix();
        glEnd();

        //circles
        glPushMatrix();
        glTranslated(0.65,2,0);
        glColor3f(0.133,0.545,0.133);
        CircleP(0.25,1);
        glPopMatrix();
        glEnd();
        glPushMatrix();
        glTranslated(0.65,2,0);
        glColor3f(0,0,0);
        CircleL(0.25,1);
        glPopMatrix();
        glEnd();

        //circles
        glPushMatrix();
        glTranslated(.90,1.25,0);
        glColor3f(0.133,0.545,0.133);
        CircleP(0.25,1);
        glPopMatrix();
        glEnd();
        glPushMatrix();
        glTranslated(.90,1.25,0);
        glColor3f(0,0,0);
        CircleL(0.25,1);
        glPopMatrix();
        glEnd();

        //circles
        glPushMatrix();
        glTranslated(1,0,0);
        glColor3f(0.133,0.545,0.133);
        CircleP(0.25,1);
        glPopMatrix();
        glEnd();
        glPushMatrix();
        glTranslated(1,0,0);
        glColor3f(0,0,0);
        CircleL(0.25,1);
        glPopMatrix();
        glEnd();

        //circles
        glPushMatrix();
        glTranslated(0.75,-1,0);
        glColor3f(0.133,0.545,0.133);
        CircleP(0.25,1);
        glPopMatrix();
        glEnd();
        glPushMatrix();
        glTranslated(0.75,-1,0);
        glColor3f(0,0,0);
        CircleL(0.25,1);
        glPopMatrix();
        glEnd();

        //circles
        glPushMatrix();
        glTranslated(0.5,-2,0);
        glColor3f(0.133,0.545,0.133);
        CircleP(0.25,1);
        glPopMatrix();
        glEnd();
        glPushMatrix();
        glTranslated(0.5,-2,0);
        glColor3f(0,0,0);
        CircleL(0.25,1);
        glPopMatrix();
        glEnd();

        //circles
        glPushMatrix();
        glTranslated(0.25,-2,0);
        glColor3f(0.133,0.545,0.133);
        CircleP(0.25,1);
        glPopMatrix();
        glEnd();
        glPushMatrix();
        glTranslated(0.25,-2,0);
        glColor3f(0,0,0);
        CircleL(0.25,1);
        glPopMatrix();
        glEnd();

        //circles
        glPushMatrix();
        glTranslated(-0.125,0,0);
        glColor3f(0.133,0.545,0.133);
        CircleP(1.20,2.20);
        glPopMatrix();
        glEnd();


        //rightslopes
        glPushMatrix();
        glTranslated(0,-3.5,0);
        glBegin(GL_POLYGON);

        glColor3f(0.627,0.321,0.176);
        glVertex2d(0,0);
        glVertex2d(.25,1);
        glVertex2d(.25,1.5);
        glVertex2d(0,0.5);
        glEnd();
        glPopMatrix();


        //leftslopes
        glPushMatrix();
        glTranslated(-0.125,-3.5,0);
        glBegin(GL_POLYGON);

        glColor3f(0.627,0.321,0.176);
        glVertex2d(0,0);
        glVertex2d(-.35,1);
        glVertex2d(-.35,1.5);
        glVertex2d(0,0.5);
        glEnd();
        glPopMatrix();
        glPopMatrix();



 //Road
        //road background
        glPushMatrix();
        glTranslated(0,-10.5,0);
        glBegin(GL_POLYGON);

        glColor3f(0.21,0.21,0.21);
        glVertex2d(10,0);
        glVertex2d(-10,0);
        glVertex2d(-10,7);
        glVertex2d(10,7);

        glEnd();
        glPopMatrix();

        //white steps 1
        glPushMatrix();
        glTranslated(-9,-6,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(1,0);
        glVertex2d(-1,0);
        glVertex2d(-1,0.3);
        glVertex2d(1,0.3);

        glEnd();
        glPopMatrix();

        //white steps 2
        glPushMatrix();
        glTranslated(-6,-6,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(1,0);
        glVertex2d(-1,0);
        glVertex2d(-1,0.3);
        glVertex2d(1,0.3);

        glEnd();
        glPopMatrix();

        //white steps 3
        glPushMatrix();
        glTranslated(-3,-6,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(1,0);
        glVertex2d(-1,0);
        glVertex2d(-1,0.3);
        glVertex2d(1,0.3);

        glEnd();
        glPopMatrix();

        //white steps 4
        glPushMatrix();
        glTranslated(0,-6,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(1,0);
        glVertex2d(-1,0);
        glVertex2d(-1,0.3);
        glVertex2d(1,0.3);

        glEnd();
        glPopMatrix();

        //white steps 5
        glPushMatrix();
        glTranslated(3,-6,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(1,0);
        glVertex2d(-1,0);
        glVertex2d(-1,0.3);
        glVertex2d(1,0.3);

        glEnd();
        glPopMatrix();

        //white steps 6
        glPushMatrix();
        glTranslated(6,-6,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(1,0);
        glVertex2d(-1,0);
        glVertex2d(-1,0.3);
        glVertex2d(1,0.3);

        glEnd();
        glPopMatrix();

        //white steps 7
        glPushMatrix();
        glTranslated(9,-6,0);
        glBegin(GL_POLYGON);

        glColor3f(1,1,1);
        glVertex2d(1,0);
        glVertex2d(-1,0);
        glVertex2d(-1,0.3);
        glVertex2d(1,0.3);

        glEnd();
        glPopMatrix();
        //-------road end------
//...........................................................car

        glPushMatrix();
        glTranslated(carx,cary,0);




        glPushMatrix();
        glTranslated(-10,-7,0);
        glScaled(1.5,1.5,1);
        //carx=carx+0.001;

//.......................................body background
        glPushMatrix();
        glTranslated(1,0,0);
        glColor3f(0,0,0);

        glBegin(GL_POLYGON);
        glVertex2d(2,2.6);
        glVertex2d(1,0.1);
        glVertex2d(1,0);
        glVertex2d(5.5,0);
        glVertex2d(5.5,0.4);
        glVertex2d(4.5,2.6);

        glEnd();
        glPopMatrix();
//..............................................chaka
 //...................... chaker upore
         glPushMatrix();
        glTranslated(5.8,-0.2,0);

        glColor3f(0,0,0);//.........front
        CircleC(0.5,1);
         //glEnd();

        glPopMatrix();
          glPushMatrix();
        glTranslated(2.8,-0.2,0);

        glColor3f(0,0,0);//.........black
        CircleC(0.5,1);
         //glEnd();

        glPopMatrix();

        glPushMatrix();
        glTranslated(5.8,-0.1,0);

        glColor3f(1,1,0);//.........light black//............front
        CircleP(0.3,0.6);
         //glEnd();

        glPopMatrix();
         glPushMatrix();
        glTranslated(2.8,-0.1,0);//.................back

        glColor3f(1,1,0);//.........light black
        CircleP(0.3,0.6);
         //glEnd();

        glPopMatrix();
        //...............................caka r vitorer gol
         glPushMatrix();
        glTranslated(5.8,-0.1,0);

        glColor3f(0,0,0);//.........black//............front
        CircleP(0.2,0.4);
         //glEnd();

        glPopMatrix();
         glPushMatrix();
        glTranslated(2.8,-0.1,0);//.................back

        glColor3f(0,0,0);//.........black
        CircleP(0.2,0.4);
         //glEnd();

        glPopMatrix();
         //...............................caka r vitorer vitorer  gol
         glPushMatrix();
        glTranslated(5.8,-0.1,0);

        glColor3f(1,1,1);//.........black//............front
        CircleP(0.1,0.2);
         //glEnd();

        glPopMatrix();
         glPushMatrix();
        glTranslated(2.8,-0.1,0);//.................back

        glColor3f(1,1,1);//.........black
        CircleP(0.1,0.2);
         //glEnd();

        glPopMatrix();

//.......................janala
 glPushMatrix();
        glTranslated(5,1.7,0);
        glScaled(4,4,0);
        glColor3f(1,1,1);

        glBegin(GL_POLYGON);

        glVertex2d(0,0);
        glVertex2d(0.1,0);
        glVertex2d(0.1,0.1);
        glVertex2d(0,0.1);

        glEnd();

        glPopMatrix();
        glPushMatrix();
        glTranslated(4.5,1.7,0);
        glScaled(4,4,0);
        glColor3f(1,1,1);

        glBegin(GL_POLYGON);

        glVertex2d(0,0);
        glVertex2d(0.1,0);
        glVertex2d(0.1,0.1);
        glVertex2d(0,0.1);

        glEnd();

        glPopMatrix();
        glPushMatrix();
        glTranslated(4,1.7,0);
        glScaled(4,4,0);
        glColor3f(1,1,1);

        glBegin(GL_POLYGON);

        glVertex2d(0,0);
        glVertex2d(0.1,0);
        glVertex2d(0.1,0.1);
        glVertex2d(0,0.1);

        glEnd();

        glPopMatrix();
        glPushMatrix();
        glTranslated(3.5,1.7,0);
        glScaled(4,4,0);
        glColor3f(1,1,1);

        glBegin(GL_POLYGON);

        glVertex2d(0,0);
        glVertex2d(0.1,0);
        glVertex2d(0.1,0.1);
        glVertex2d(0,0.1);

        glEnd();

        glPopMatrix();
        glPushMatrix();
        glTranslated(4,1.7,0);
        glScaled(4,4,0);
        glColor3f(1,1,1);

        glBegin(GL_POLYGON);

        glVertex2d(0,0);
        glVertex2d(0.1,0);
        glVertex2d(0.1,0.1);
        glVertex2d(0,0.1);

        glEnd();

        glPopMatrix();
        glPushMatrix();
        glTranslated(3,1.7,0);
        glScaled(4,4,0);
        glColor3f(1,1,1);

        glBegin(GL_POLYGON);

        glVertex2d(0,0);
        glVertex2d(0.1,0);
        glVertex2d(0.1,0.1);
        glVertex2d(0,0.1);

        glEnd();

        glPopMatrix();

//...................................door

      glPushMatrix();
        glTranslated(3.6,0,0);
        glColor3f(1,1,1);

        glBegin(GL_LINE_LOOP);

        glVertex2d(0,0);
        glVertex2d(1.4,0);
        glVertex2d(1.4,1);
        glVertex2d(0,1);

        glEnd();

        glPopMatrix();
         glPushMatrix();
        glTranslated(3.7,0.91,0);
        glColor3f(1,1,1);

        glBegin(GL_POLYGON);

        glVertex2d(0,0);
        glVertex2d(0.1,0);
        glVertex2d(0.1,0.1);
        glVertex2d(0,0.1);

        glEnd();

        glPopMatrix();

        //...........................................head light

         glPushMatrix();
        glTranslated(5.75,5.9,0);
        glPushMatrix();
        glTranslated(0.75,-5.6,0);
        glRotated(270,0,0,1);

        glColor3f(1,1,0);//.........yellow
        CircleC(0.09,0.05);
         //glEnd();

        glPopMatrix();
        glPushMatrix();
        glTranslated(0.75,-5.8,0);
        glRotated(270,0,0,1);

        glColor3f(1,1,0);//.........yellow
        CircleC(0.09,0.05);
        // glEnd();
        glPopMatrix();
        glEnd();

        glPopMatrix();

        glPopMatrix();
        //glEnd();

        glPopMatrix();

        glPopMatrix();

        //.............................................end

        glFlush();
    //glutSwapBuffers();

}

int main()
{

    glutInitWindowSize(glutGet(GLUT_SCREEN_WIDTH),glutGet(GLUT_SCREEN_HEIGHT));
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("Final project");

    init();
    glutDisplayFunc(myDisplay);
    glutSpecialFunc(specialKey);
    glutKeyboardFunc(normalKey);
    glutMainLoop();

    return 0;
}
