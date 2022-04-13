#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
GLfloat angle=0.0;

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glOrtho(-600,600,-600,600,-600,600);
}


void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)//radius_x,radius_y,certre_position_x,centre_position_y
{

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=100000;i++)

    {
        float angle = 2 * 3.1416f * i/100000;

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
       //glRotated(-80,0,0,1);
    glTranslated(-200,0,0.0);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(0,-3);
    glVertex2i(0,203);
    glVertex2i(450,203);
    glVertex2i(450,-3);
   glEnd();
   glPopMatrix();

          glPushMatrix();
       //glRotated(-80,0,0,1);
    glTranslated(-200,0,0.0);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(-100,30);
    glVertex2i(-100,111);
    glVertex2i(0,203);
    glVertex2i(0,-3);
   glEnd();
   glPopMatrix();

             glPushMatrix();
       //glRotated(-80,0,0,1);
    glTranslated(-200,0,0.0);
    glColor3f(0.901, 0.913, 0.788);
    glBegin(GL_POLYGON);
    glVertex2i(-98,28);
    glVertex2i(-98,108);
    glVertex2i(-0,201);
    glVertex2i(-0,-1);
   glEnd();
   glPopMatrix();



    glPushMatrix();
       //glRotated(-80,0,0,1);
    glTranslated(-200,0,0.0);
    glColor3f(0.901, 0.913, 0.788);
    glBegin(GL_POLYGON);
    glVertex2i(0,0);
    glVertex2i(0,200);
    glVertex2i(450,200);
    glVertex2i(450,0);
   glEnd();
   glPopMatrix();

      glPushMatrix();
       //glRotated(-80,0,0,1);
    glTranslated(-200,0,0.0);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);

    glVertex2i(450,203);
    glVertex2i(653,203);
    glVertex2i(653,147);
    glVertex2i(450,-3);
   glEnd();
   glPopMatrix();

   glPushMatrix();
       //glRotated(-80,0,0,1);
    glTranslated(-200,0,0.0);
    glColor3f(0.901, 0.913, 0.788);
    glBegin(GL_POLYGON);

    glVertex2i(450,200);
    glVertex2i(650,200);
    glVertex2i(650,150);
    glVertex2i(450,0);
   glEnd();
   glPopMatrix();


         glPushMatrix();
       //glRotated(-80,0,0,1);
    glTranslated(-140,40,0.0);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(0,0);
    glVertex2i(0,110);
    glVertex2i(40,110);
    glVertex2i(40,0);
   glEnd();
   glPopMatrix();

    glPushMatrix();
       //glRotated(-80,0,0,1);
    glTranslated(-140,40,0.0);
    glColor3f(0.901, 0.913, 0.788);
    glBegin(GL_POLYGON);
    glVertex2i(3,3);
    glVertex2i(3,107);
    glVertex2i(37,107);
    glVertex2i(37,3);
   glEnd();
   glPopMatrix();


    glPushMatrix();
    glTranslated(0,70,0.0);
      glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(0,0);
    glVertex2i(100,0);
   glEnd();
   glPopMatrix();


    glPushMatrix();
    glTranslated(0,70,0.0);
      glColor3f(0.901, 0.913, 0.788);
    glBegin(GL_POLYGON);
    glVertex2i(0,0);
    glVertex2i(100,0);
    glVertex2i(150,-300);
    glVertex2i(80,-280);
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslated(0,65,0.0);
      glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
     glVertex2i(0,0);
    glVertex2i(80,-280);
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslated(0,65,0.0);
      glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
     glVertex2i(100,0);
    glVertex2i(150,-300);
   glEnd();
   glPopMatrix();

   glPushMatrix();
    glTranslated(0,65,0.0);
      glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(150,-300);
    glVertex2i(80,-280);
   glEnd();
   glPopMatrix();


   glPushMatrix();
    glTranslated(-60,110,0.0);
    glColor3f(0.180, 0.592, 0.698);
    circle(5,10,0,0);
    glPopMatrix();

       glPushMatrix();
    glTranslated(-40,110,0.0);
    glColor3f(0.180, 0.592, 0.698);
    circle(5,10,0,0);
    glPopMatrix();

       glPushMatrix();
    glTranslated(-20,110,0.0);
    glColor3f(0.180, 0.592, 0.698);
    circle(5,10,0,0);
    glPopMatrix();

       glPushMatrix();
    glTranslated(0,110,0.0);
    glColor3f(0.180, 0.592, 0.698);
    circle(5,10,0,0);
    glPopMatrix();


       glPushMatrix();
    glTranslated(20,110,0.0);
    glColor3f(0.180, 0.592, 0.698);
    circle(5,10,0,0);
    glPopMatrix();

       glPushMatrix();
    glTranslated(40,110,0.0);
    glColor3f(0.180, 0.592, 0.698);
    circle(5,10,0,0);
    glPopMatrix();

       glPushMatrix();
    glTranslated(60,110,0.0);
    glColor3f(0.180, 0.592, 0.698);
    circle(5,10,0,0);
    glPopMatrix();

       glPushMatrix();
    glTranslated(80,110,0.0);
    glColor3f(0.180, 0.592, 0.698);
    circle(5,10,0,0);
    glPopMatrix();

       glPushMatrix();
    glTranslated(100,110,0.0);
    glColor3f(0.180, 0.592, 0.698);
    circle(5,10,0,0);
    glPopMatrix();

       glPushMatrix();
    glTranslated(120,110,0.0);
    glColor3f(0.180, 0.592, 0.698);
    circle(5,10,0,0);
    glPopMatrix();

       glPushMatrix();
    glTranslated(140,110,0.0);
    glColor3f(0.180, 0.592, 0.698);
    circle(5,10,0,0);
    glPopMatrix();

       glPushMatrix();
   glTranslated(160,110,0.0);
    glColor3f(0.180, 0.592, 0.698);
    circle(5,10,0,0);
    glPopMatrix();

       glPushMatrix();
    glTranslated(180,110,0.0);
    glColor3f(0.180, 0.592, 0.698);
    circle(5,10,0,0);
    glPopMatrix();

   glPushMatrix();
    glTranslated(-300,70,0.0);
    glColor3f(0.180, 0.592, 0.698);
    circle(17,35,0,0);
    glPopMatrix();



      glPushMatrix();
    glTranslated(0,120,0.0);
      glColor3f(0.901, 0.913, 0.788);
    glBegin(GL_POLYGON);
    glVertex2i(0,0);
    glVertex2i(100,0);
    glVertex2i(80,300);
    glVertex2i(20,280);
   glEnd();
   glPopMatrix();

   glPushMatrix();
    glTranslated(0,120,0.0);
      glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
  glVertex2i(5,75);
    glVertex2i(20,280);
   glEnd();
   glPopMatrix();


 glPushMatrix();
    glTranslated(0,120,0.0);
      glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
   glVertex2i(95,77);
    glVertex2i(80,300);
   glEnd();
   glPopMatrix();


     glPushMatrix();
    glTranslated(0,120,0.0);
      glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(80,300);
    glVertex2i(20,280);
   glEnd();
   glPopMatrix();

     glPushMatrix();
    glTranslated(0,203,0.0);
      glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(0,0);
    glVertex2i(100,0);
   glEnd();
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
