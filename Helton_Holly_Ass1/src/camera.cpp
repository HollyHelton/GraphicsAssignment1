/*
camera.cpp
Translates mouse movement to camera movement
Inspired by http://www.opengl-tutorial.org/beginners-tutorials/tutorial-6-keyboard-and-mouse/
Holly Helton October 2018
*/

#include "wrapper_glfw.h"
#include <glm.hpp>

/* Initialise camera veriables with defaults */
vec3 position = vec3(0, 0, 5);
GLfloat horizontalAngle = 3.14f;
GLfloat verticalAngle = 0.0f;
GLfloat initialFoV = 45.0f;

GLfloat speed = 3.0f;
GLfloat mouseSpeed = 0.005f;

using namespace glm;

