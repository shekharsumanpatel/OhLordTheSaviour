#include<iostream>
#include "adder.h"
#include <GLFW/glfw3.h>
using namespace std;

int main()
{
	cout<<"Hey there its me !!!"<<endl;
	cout<<"The sum of 3.0 and 5.0 = "<<add(3.0, 5.0)<<endl;

	GLFWwindow* window;

	if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        exit( EXIT_FAILURE );
    }

	window = glfwCreateWindow( 300, 300, "Gears", NULL, NULL );
    if (!window)
    {
        fprintf( stderr, "Failed to open GLFW window\n" );
        glfwTerminate();
        exit( EXIT_FAILURE );
    }

	// Main loop
    while( !glfwWindowShouldClose(window) )
    {
        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    // Terminate GLFW
    glfwTerminate();

	return 0;
}
