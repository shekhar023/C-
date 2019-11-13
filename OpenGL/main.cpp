//
//  main.cpp
//  OpenGL
//
//  Created by Shekhar Chaudhary on 20/09/18.
//  Copyright © 2018 Shekhar Chaudhary. All rights reserved.
//

#include <iostream>
#include <OpenGL/OpenGL.h>
#include <GLUT/GLUT.h>

using namespace std;

void display();
void reshape(int,int);

int main(int argc , char**argv){
    
    glutInit(&argc,argv);
    
    glutInitWindowSize(512, 512);
    
    glutInitDisplayMode(GLUT_RGBA|GLUT_DEPTH|GLUT_DOUBLE);
    
    glutCreateWindow("LAB 1");
    
    glutDisplayFunc(display);
    
    glutReshapeFunc(reshape);
    
     glClearColor(0,0,0,1);
    
     glutMainLoop();
    

}

void display()
{
    /* clear the color buffer (resets everything to black) */
    glClear(GL_COLOR_BUFFER_BIT);
    
    /* set the current drawing color to red */
    glColor3f(1, 0, 0);
    
    /* start drawing triangles, each triangle takes 3 vertices */
    glBegin(GL_TRIANGLES);
    
    /* give the 3 triangle vertex coordinates 1 at a time */
    glVertex2f(10, 10);
    glVertex2f(250, 400);
    glVertex2f(400, 10);
    
    /* tell OpenGL we're done drawing triangles */
    glEnd();
    
    /* swap the back and front buffers so we can see what we just drew */
    glutSwapBuffers();
}

void reshape(int width, int height)
{
    /* tell OpenGL we want to display in a recangle that is the
     same size as the window
     */
    glViewport(0,0,width,height);
    
    /* switch to the projection matrix */
    glMatrixMode(GL_PROJECTION);
    
    /* clear the projection matrix */
    glLoadIdentity();
    
    /* set the camera view, orthographic projection in 2D */
    gluOrtho2D(0,width,0,height);
    
    /* switch back to the model view matrix */
    glMatrixMode(GL_MODELVIEW);
}


