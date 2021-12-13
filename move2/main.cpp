#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
GLfloat angle=0.0;

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glOrtho(-150,150,-150,150,-150,50);
}


void myDisplay(void)
{
   // glClear(GL_COLOR_BUFFER_BIT);
   // glRotatef(angle,0,0,1);

      glClear(GL_COLOR_BUFFER_BIT);

      //glPushMatrix();
      glRotatef(angle,0,0,1);
      //Push and pop matrix for separating circle object from Background
      glColor3f(0.0,1.0,0.0);
         // glBegin(GL_POLYGON);
           //glVertex2f(100,100);
           //glVertex2f(100,160);
          // glVertex2f(450,160);
          // glVertex2f(450,100);
       glBegin(GL_POLYGON);

            glVertex2i(-10, -10);

            glVertex2i( 10, -10 );

            glVertex2i( 10, 10 );

            glVertex2i( -10, 10 );

            glEnd( );
      // glEnd();
      //glPopMatrix();
      glutSwapBuffers();
      glFlush();
}

void sp_L(void){
    angle+=10;
    glutPostRedisplay();
}
void sp_R(void){
    angle-=10;
    glutPostRedisplay();
}

void myKey(unsigned char key, int x, int y){
  switch(key){
    case 'l':
        sp_L();
        break;
    case 'r':
        sp_R();
        break;
    case 's':
        glutIdleFunc(sp_L);
        break;
    case 'n':
        glutIdleFunc(NULL);
        break;
    default:
        break;
  }
}


int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 400);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Demo Application");
    init();
    glutDisplayFunc(myDisplay);
    glutKeyboardFunc(myKey);
    glutMainLoop();
    return 0;
}
