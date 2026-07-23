#include <iostream>
#include <glad/gl.h>
#include <GL/gl.h>
#include <GLFW/glfw3.h>

#define WINDOW_HEIGHT 720.0f
#define WINDOW_WIDTH	1280.0f

int main(void)
{
	//well uhh this is how to init glfw(it'll gimmi da window and input to it and stuff)'
	glfwInit();

	//checking if the initialization of glfw failed, if it did the exit and return error(-1)
	if(!glfwInit())
	{
		return -1;
	}

	//initializing da window i'll be working on
	GLFWwindow *window;
	window = glfwCreateWindow(WINDOW_WIDTH,WINDOW_HEIGHT,"hello world",NULL,NULL);
	
	//checking if the initalization of window fails, if it does then exit and returns error
	if(window == NULL)
	{
		std::cout << "no window :("<<std::endl;
		glfwTerminate();
		return -1;
	}

	//keeping the window as the current context cuz glfw is too dum
	glfwMakeContextCurrent(window);
	
	//load glad so it configures openGL
	if(!gladLoadGL(glfwGetProcAddress))
	{
		std::cout << "no glad:(";
		return -1;
	}

	//specify the jviewport of openGL in the window(it scales our abstract coordinates to actual pixels of the screen)
	glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);

	//specify the color of the background, RGB and alpha"
	glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
	//Clear the back buffer and asssin the new color to it j
	glClear(GL_COLOR_BUFFER_BIT);
	//swap the backbuffer with the front buffer
	glfwSwapBuffers(window);

	//da gameloop
	std::cout << glGetString(GL_VERSION) << std::endl;
	while(!glfwWindowShouldClose(window))
	{
		glClear(GL_COLOR_BUFFER_BIT);

		//take care of all glfw events 
		glfwPollEvents();
	}

	//delete the window before ending the program
	glfwDestroyWindow(window);
	
	//teminate glfw before ending the program 
	glfwTerminate();
	return 0;
}

