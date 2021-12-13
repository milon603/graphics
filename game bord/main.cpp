#include <windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <stdlib.h>

void init(void)
{
  glClearColor(128,0,0,1); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
  glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
  glLoadIdentity();
  //glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
  gluOrtho2D(0.0,200.0,200.0,0.0); // Orthographic representation; multiply the current matrix by an orthographic matrix 2D= left right,bottom,top equivalent near=-1,far=1
}

void black(int i, int j){
   glColor3f(0,0,0);
   glBegin(GL_POLYGON);
    glVertex2i(i*20,j*20); // sad 1
    glVertex2i(i*20+20,j*20);
    glVertex2i(i*20+20,j*20+20);
    glVertex2i(i*20,j*20+20);
   glEnd();

}
void white(int i, int j){
   glColor3f(1,1,1);
   glBegin(GL_POLYGON);
   glVertex2i(i*20,j*20); // sad 1
    glVertex2i(i*20+20,j*20);
    glVertex2i(i*20+20,j*20+20);
    glVertex2i(i*20,j*20+20);
   glEnd();
}


void Draw()
{
    int i,j;
    for(i=1;i<=8;i++){
       for(j=1;j<=8;j++){
         if(i%2==j%2)white(i,j);
         else black(i,j);
       }
    }
    glutSwapBuffers();
}

int main(int argc, char *argv[])
{

    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(100,200);
    glutInitWindowSize(200,200);
    glutCreateWindow("Lab task 1");
    init();
    glutDisplayFunc(Draw);
    glutMainLoop();
    return 0;
}
