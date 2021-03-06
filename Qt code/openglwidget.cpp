#include "openglwidget.h"
#include <qopengl.h>
#include <qopenglfunctions.h>
#include <qopenglfunctions_1_0.h>
#include <qopenglextrafunctions.h>
#include "gltry1.h"



openGLWidget::openGLWidget(QWidget *parent)

{
//    //setSurfaceType(QWindow::OpenGLSurface) ;

//    QSurfaceFormat format ;
//    format.setProfile(QSurfaceFormat::CompatibilityProfile);
//    format.setVersion(2,1);
//    //setFormat(format);

//    context = new QOpenGLContext ;
//    context->setFormat(format);
//    context->create();
//    //context->makeCurrent(this);

//    OpenGLFunctions= context->functions();

}

openGLWidget::~openGLWidget()
{

}

void openGLWidget::initializeGL()
{

   // glEnable(GL_DEPTH_TEST) ;
   // resizeGL(this->width(),this->height());

    glClearColor(0.39f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHTING);
    glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE);
    glEnable(GL_COLOR_MATERIAL);

}

void openGLWidget::resizeGL(int w, int h)
{
glViewport(0,0,w,h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  //gluPerspective(45, (float)w/h, 0.01, 100.0);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  //gluLookAt(0,0,5,0,0,0,0,1,0);
//qreal aspectratio =qreal(w)/qreal(h);

//glMatrixMode(GL_PROJECTION);
//glLoadIdentity();

//gluPerspective(75,aspectratio,0.1,400000000);
//glMatrixMode(GL_MODELVIEW);
//glLoadIdentity();
}

void openGLWidget::paintGL()
{




   glBegin(GL_POLYGON);
          glVertex3f(.1,0,0);
          glVertex3f(.1,.1,0);
          glVertex3f(0,.1,.1);
          glVertex3f(0,0,.1);

   glEnd();



   glBegin(GL_LINES);
        glColor3f(1.0f,1.0f,0.0f);
        glVertex3f(.0,.0,.0);
        glVertex3f(.0,.7,.5);
     glEnd();

     glBegin(GL_LINES);
          glColor3f(0.0f,1.0f,0.0f);
                 glVertex3f(.0,.0,.0);
                 glVertex3f(.0,.5,.0);
       glEnd();

       glBegin(GL_LINES);
            glColor3f(0.0f,0.0f,1.0f);
                   glVertex3f(.0,.0,.0);
                   glVertex3f(.5,.0,.0);
         glEnd();



   glBegin(GL_POLYGON);
          glVertex3f(.2,.2,0);
          glVertex3f(.3,.2,0);
          glVertex3f(.3,.3,0);
          glVertex3f(.2,.3,0);

   glEnd();

   glBegin(GL_POLYGON);
          glVertex3f(0,.2,.2);
          glVertex3f(0,.3,.2);
          glVertex3f(0,.3,.3);
          glVertex3f(0,.2,.3);

   glEnd();




}

void openGLWidget::resizeEvent(QResizeEvent *event)
{

}

void openGLWidget::paintEvent(QPaintEvent *event)
{
    paintGL();



}
