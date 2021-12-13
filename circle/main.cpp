#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
GLfloat angle=0.0;

void init()
{
    glClearColor(0.5f, 0.5f, 0.0f, 1.0f);
    glOrtho(-600,600,-600,600,-600,600);
}


void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=100;i++)

    {
        float angle = 2 * 3.1416f * i/100;

        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}


void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

 /*  glPushMatrix();
    glTranslated(0,3,0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    circle(3.2,6.2,0,0);
    glPopMatrix();*/


           glPushMatrix();
    glTranslated(-50,-200,0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    circle(52,110,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(35,30,0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    circle(55,70,0,0);
    glPopMatrix();

        glPushMatrix();
    glTranslated(35,30,0.0);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(50,60,0,0);
    glPopMatrix();


        glPushMatrix();
    glTranslated(-230,30,0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    circle(55,70,0,0);
    glPopMatrix();

        glPushMatrix();
    glTranslated(-230,30,0.0);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(50,60,0,0);
    glPopMatrix();



       glPushMatrix();
    glTranslated(-150,-200,0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    circle(52,110,0,0);
    glPopMatrix();

           glPushMatrix();
    glTranslated(-50,-200,0.0);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(45,95,0,0);
    glPopMatrix();

       glPushMatrix();
    glTranslated(-150,-200,0.0);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(45,95,0,0);
    glPopMatrix();

     glPushMatrix();
    glTranslated(-400,-400,0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2i(198,190);
    glVertex2i(402,190);
    glVertex2i(372,602);
    glVertex2i(228,602);
   glEnd();

   glPopMatrix();
    glPushMatrix();
    glTranslated(-400,-400,0.0);
    glColor3f(1.0f, 0.0f, 1.0f);
    glBegin(GL_POLYGON);
    glVertex2i(200,200);
    glVertex2i(400,200);
    glVertex2i(370,600);
    glVertex2i(230,600);
   glEnd();
   glPopMatrix();

   glPushMatrix();
    glTranslated(-100,200,0.0);
    glColor3f(1.0f, 0.0f, 0.0f);
    circle(50,70,0,0);
    glPopMatrix();


      glPushMatrix();
    glTranslated(-400,-400,0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2i(370,600);
    glVertex2i(460,500);
    glVertex2i(385,420);
   glEnd();
   glPopMatrix();


   glPushMatrix();
    glTranslated(-400,-400,0.0);
   glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2i(375,590);
    glVertex2i(455,505);
    glVertex2i(390,425);
   glEnd();
   glPopMatrix();


      glPushMatrix();
    glTranslated(-400,-400,0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2i(230,600);
    glVertex2i(140,505);
    glVertex2i(220,420);

   glEnd();
   glPopMatrix();


         glPushMatrix();
    glTranslated(-400,-400,0.0);
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2i(225,595);
    glVertex2i(145,500);
    glVertex2i(215,425);

   glEnd();
   glPopMatrix();

       glPushMatrix();
    glTranslated(-100,340,0.0);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(100,150,0,0);
    glPopMatrix();

           glPushMatrix();
    glTranslated(-100,200,0.0);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(80,15,0,0);
    glPopMatrix();

             glPushMatrix();
    glTranslated(-60,230,0.0);
   glColor3f(1.0f, 1.0f, 1.0f);
    circle(40,40,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(-140,230,0.0);
   glColor3f(1.0f, 1.0f, 1.0f);
    circle(40,40,0,0);
    glPopMatrix();

        glPushMatrix();
    glTranslated(-140,320,0.0);
   glColor3f(0.0f, 0.0f, 0.0f);
    circle(15,20,0,0);
    glPopMatrix();

            glPushMatrix();
    glTranslated(-160,460,0.0);
   glColor3f(1.0f, 1.0f, 1.0f);
    circle(30,60,0,0);
    glPopMatrix();

                glPushMatrix();
    glTranslated(-30,460,0.0);
   glColor3f(1.0f, 1.0f, 1.0f);
    circle(30,60,0,0);
    glPopMatrix();

            glPushMatrix();
    glTranslated(-50,320,0.0);
   glColor3f(0.0f, 0.0f, 0.0f);
    circle(15,20,0,0);
    glPopMatrix();

                glPushMatrix();
    glTranslated(-95,270,0.0);
   glColor3f(1.0f, 0.0f, 0.0f);
    circle(15,15,0,0);
    glPopMatrix();



    glFlush();
}
int main()
{
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Demo Application");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
