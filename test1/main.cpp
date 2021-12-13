#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <stdlib.h>

void init(void)
{
  glClearColor(0,0,0,0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  //glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
  gluOrtho2D(0.0,1200.0,0.0,500.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}

void Draw()
{
    //glClear(GL_COLOR_BUFFER_BIT);
   //glColor3f( 1 ,0, 0);
   //glBegin(GL_POLYGON);
   //glVertex
   //glEnd();
   int xx=1;
    glColor3f(xx,xx,xx);
   glBegin(GL_POLYGON);
    glVertex2i(100,300);
    glVertex2i(300,450);
    glVertex2i(500,300);
   glEnd();

    glColor3f(0,255,0);
   glBegin(GL_POLYGON);
    glVertex2i(265,350);
    glVertex2i(335,350);
    glVertex2i(335,400);
    glVertex2i(265,400);
   glEnd();

    glColor3f(128,0,0);
   glBegin(GL_LINES);
    glVertex2i(265,375);
    glVertex2i(335,375);
   glEnd();

    glColor3f(128,0,0);
   glBegin(GL_LINES);
    glVertex2i(300,350);
    glVertex2i(300,400);
   glEnd();

     glColor3f(0,0,255);
   glBegin(GL_POLYGON);
    glVertex2i(300,450);
    glVertex2i(500,300);
    glVertex2i(1100,300);
    glVertex2i(900,450);
   glEnd();

     glColor3f(128,0,0);
   glBegin(GL_POLYGON);
    glVertex2i(100,300);
    glVertex2i(500,300);
    glVertex2i(500,50);
    glVertex2i(100,70);
   glEnd();

     glColor3f(0,255,0);
   glBegin(GL_POLYGON);
    glVertex2i(250,200);
    glVertex2i(350,200);
    glVertex2i(350,100);
    glVertex2i(250,105);
   glEnd();

      glColor3f(0,128,128);
   glBegin(GL_POLYGON);
    glVertex2i(500,50);
    glVertex2i(500,300);
    glVertex2i(1100,300);
    glVertex2i(1100,70);
   glEnd();

   glColor3f(0,255,0);
    glBegin(GL_POLYGON);
    glVertex2i(950,100);
    glVertex2i(950,200);
    glVertex2i(1050,200);
    glVertex2i(1050,100);
   glEnd();

   glColor3f(0,255,0);
   glBegin(GL_POLYGON);
    glVertex2i(580,100);
    glVertex2i(580,200);
    glVertex2i(680,200);
    glVertex2i(680,100);
   glEnd();

      glColor3f(0,255,0);
   glBegin(GL_POLYGON);
    glVertex2i(750,60);
    glVertex2i(750,200);
    glVertex2i(850,200);
    glVertex2i(850,60);
   glEnd();

      glColor3f(1,1,1);
   glBegin(GL_POLYGON);
    glVertex2i(750,60);
    glVertex2i(747,50);
    glVertex2i(847,50);
    glVertex2i(850,60);
   glEnd();

      glColor3f(0,255,0);
   glBegin(GL_POLYGON);
    glVertex2i(750,50);
    glVertex2i(753,40);
    glVertex2i(853,40);
    glVertex2i(850,50);
   glEnd();

        glColor3f(1,1,1);
   glBegin(GL_POLYGON);
    glVertex2i(750,40);
    glVertex2i(747,30);
    glVertex2i(847,30);
    glVertex2i(850,40);
   glEnd();

// Write your Code


    glutSwapBuffers();
}

int main(int argc, char *argv[])
{

    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(100,200);
    glutInitWindowSize(1200,500);
    glutCreateWindow("Lab task 1");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
