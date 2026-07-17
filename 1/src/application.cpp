#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#define WINDOW_HEIGHT 720.0f
#define WINDOW_WIDTH	1280.0f

int main(void)
{
	GLFWwindow *window;

	if(!glfwInit())
	{
		return -1;
	}


	window = glfwCreateWindow(WINDOW_WIDTH,WINDOW_HEIGHT,"hello world",NULL,NULL);
	if(!window)
	{
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);

	if(glewInit() != GLEW_OK)
		std::cout << "Error!<-will not delete this and will keep ignoring cuz you don matter anyway." << std::endl;
	
	std::cout << glGetString(GL_VERSION) << std::endl;
	while(!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);

		glBegin(GL_TRIANGLES);
		glVertex2d(-0.5f, -0.5f);
		glVertex2d(0.0f, 0.5f);
		glVertex2d(0.5f, -0.5f);
		glEnd();

		glfwSwapBuffers(window);

		glfwPollEvents();
	}

	glfwTerminate();
	
	return 0;
}

