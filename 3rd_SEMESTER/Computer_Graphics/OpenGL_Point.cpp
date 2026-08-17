#include <glew.h>
#include <glfw3.h>

int main()
{
    // Initialize GLFW
    if (!glfwInit())
        return -1;

    // Create window
    GLFWwindow *window = glfwCreateWindow(800, 600, "OpenGL Point", NULL, NULL);

    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    // Render loop
    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);

        // Set point size
        glPointSize(10);

        // Draw point
        glBegin(GL_POINTS);

        glColor3f(1.0, 0.0, 0.0); // Red color
        glVertex2f(0.0, 0.0);     // Center point

        glEnd();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
}