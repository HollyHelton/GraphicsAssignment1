/**
Holly Helton
27/10/18
Code taken from GLFW documentation (Identified by comments beginning with "GLFW:")
Code modified by myself has been commented as normal
*/

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <iostream>

int main(void)
{
	
	GLFWwindow* window;

	/* GLFW: Initialize the library */
	if (!glfwInit())
		return 0;

	/* GLFW: Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return 0;
	}

	/* GLFW: Make the window's context current */
	glfwMakeContextCurrent(window);

	/* Initialise GLEW. Must have an OpenGL rendering context before initialising.*/
	if (glewInit() != GLEW_OK) {
		std::cout << "GLEW is not okay" << std::endl;
	}

	/* Define the vertex buffer */
	GLuint buffer;
	glGenBuffers(1, &buffer);
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
		
	/* GLFW: Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		/* GLFW: Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		/* GLFW: Swap front and back buffers */
		glfwSwapBuffers(window);

		/* GLFW: Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}