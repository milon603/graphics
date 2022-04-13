
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


    glPushMatrix();
    glTranslated(0,100,0.0);
    glColor3f(0.0, 0.0, 0.0);
    circle(200,400,0,0);
    glPopMatrix();

        glPushMatrix();
    glTranslated(0,100,0.0);
    glColor3f(1.0, 1.0, 1.0);
    circle(190,390,0,0);
    glPopMatrix();

            glPushMatrix();
    glTranslated(20,70,0.0);
    glColor3f(0.0, 0.0, 0.0);
    circle(55,105,0,0);
    glPopMatrix();

    glPushMatrix();
    glTranslated(20,70,0.0);
    glColor3f(0.047, 0.909, 0.913);
    circle(50,100,0,0);
    glPopMatrix();

     glPushMatrix();
          glTranslated(-370,40,0.0);
    glRotated(-30,0,0,1);
      glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2i(-5,-405);
    glVertex2i(-5,605);
    glVertex2i(305,605);
    glVertex2i(305,-405);
   glEnd();

   glPopMatrix();

    glPushMatrix();
       glTranslated(-120,-120,0.0);
    glRotated(-30,0,0,1);
      glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(-5,-405);
    glVertex2i(-5,605);
    glVertex2i(35,605);
    glVertex2i(35,-405);
   glEnd();
   glPopMatrix();

  glPushMatrix();
    glTranslated(-120,-120,0.0);
    glRotated(-30,0,0,1);
      glColor3f(0.913, 0.592, 0.047);
    glBegin(GL_POLYGON);
    glVertex2i(0,-400);
    glVertex2i(0,600);
    glVertex2i(30,600);
    glVertex2i(30,-400);
   glEnd();
   glPopMatrix();

        glPushMatrix();
    glTranslated(-40,0,0.0);
   // glRotated(30,0,0,1);
      glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(100,0);
    glVertex2i(230,0);
   glEnd();
   glPopMatrix();

           glPushMatrix();
    glTranslated(-40,0,0.0);
   // glRotated(30,0,0,1);
      glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(100,30);
    glVertex2i(230,80);
   glEnd();
   glPopMatrix();



           glPushMatrix();
    glTranslated(-80,0,0.0);
   // glRotated(30,0,0,1);
      glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(140,70);
    glVertex2i(280,180);
   glEnd();
   glPopMatrix();


           glPushMatrix();
    glTranslated(100,-30,0.0);
   // glRotated(30,0,0,1);
      glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(-40,50);
    glVertex2i(60,-100);
   glEnd();
   glPopMatrix();

              glPushMatrix();
    glTranslated(20,-90,0.0);
   // glRotated(30,0,0,1);
      glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(0,50);
    glVertex2i(30,-200);
   glEnd();
   glPopMatrix();

              glPushMatrix();
    glTranslated(0,-60,0.0);
   // glRotated(30,0,0,1);
      glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);
    glVertex2i(0,50);
    glVertex2i(0,-220);
   glEnd();
   glPopMatrix();

    glFlush();
}
int main()
{
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("181-15-10789");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
