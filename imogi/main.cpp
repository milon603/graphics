#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

static float  tx  =  0.0;
static float  ty  =  0.0;

void init()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glOrtho(-15,15,-15,15,-15,5);
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
void body(GLfloat x, GLfloat y, GLfloat cx, GLfloat cy)
{
    glColor3f(345, 1, .5);
    circle(10,10,0,0);

    glPushMatrix();
    glTranslatef(-.2,-.5,0);
    glColor3f(215, 168, 0);
    circle(9.7,9.7,0,0);
    glPopMatrix();
}


void eye(GLfloat x, GLfloat y, GLfloat cx, GLfloat cy)
{
    glColor3f(0, 0, 0);
    circle(x,y,cx,cy+1);

    glColor3f(345, 1, .5);
    circle(x+.5,y,cx,cy+.5);

    glColor3f(0, 0, 0);
    circle(x+.1,y+.1,cx,cy);

    glColor3f(1, 1, 1);
    circle(x,y,cx,cy);

    glColor3f(0, 0, 0);
    circle(.8,.8,cx+.2,cy-.2);
}


void mouth()
{
    glColor3f(0, 0, 0);
    circle(6.7,6.7,0,-1.5);

    glColor3f(215, 168, 0);
    circle(9,6.7,0,1.5);

    glColor3f(204, 0, 0);
    circle(2,.4,0,-7.8);

    glColor3f(204, 0, 0);
    circle(2.5,.25,0,-7.73);

    glColor3f(204, 0, 0);
    circle(2.7,.25,0,-7.63);

    glColor3f(204, 0, 0);
    circle(2.9,.25,0,-7.53);

    glColor3f(204, 0, 0);
    circle(3.1,.25,0,-7.43);

    glColor3f(204, 0, 0);
    circle(2.9,.25,0,-7.33);

    glColor3f(204, 0, 0);
    circle(2.8,.35,0,-7.26);

    glColor3f(204, 0, 0);
    circle(2.6,.55,0,-7.16);
}

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);
    body(10,10,0,0);
    mouth();
    eye(2,2,-5,2.7);
    eye(2,2,5,2.7);
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
