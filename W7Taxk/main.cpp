#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
GLint b=0;
float  counter=-250.0;
void initOpenGl()
{
    glClearColor(0.5,0.5,0.5,1); //Background Color
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0,700,0,500);
    glMatrixMode(GL_MODELVIEW);
}

void ract()
{


   //Bottom Part
  // glLoadIdentity();
   //counter+=0.03;
  // if(counter>750)counter=-250.0;
   //glTranslated(counter,-100,0.0);
   glBegin(GL_POLYGON);
   glVertex2f(0,400);
   glVertex2f(200,400);
   glVertex2f(200,300);
   glVertex2f(0,300);

   glEnd();
}

void display()
{

  glClear(GL_COLOR_BUFFER_BIT);
  //Push and pop matrix for separating circle object from Background
  glColor3f(0.0,1.0,0.0);
  ract();
  glutSwapBuffers();
  glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    glutInitWindowSize(700,500);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Moving");
    initOpenGl();
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
    return 0;
}
