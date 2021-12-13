//id: 182-15-11603

#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

static float  tx  =  0.0;
static float  ty  =  0.0;

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glOrtho(-15,15,-15,15,-15,100);
}
void circle(GLfloat rx,GLfloat ry,GLfloat cx,GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);

    for(int i=0;i<=200;i++)
    {
        float angle = 2 * 3.1416f * i/200;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f((x+cx),(y+cy));
    }
    glEnd();
}


void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0f, 0.0f, 0.0f);
    circle(10,10,0,0);


    glPushMatrix();
    glTranslatef(2.0f,2.0f,0.0f);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(10,10,0,0);
    glPopMatrix();
    glFlush();
}
int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("Demo Application");
    init();
    glutDisplayFunc(myDisplay);
    glutMainLoop();
    return 0;
}
