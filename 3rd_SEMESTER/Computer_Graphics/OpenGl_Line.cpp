#include <glew.h>
#include <glfw3.h>

int main()
{
    // Initialize GLFW
    if (!glfwInit())
        return -1;

    // Create window
    GLFWwindow *window = glfwCreateWindow(800, 600, "OpenGL Line", NULL, NULL);

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

        // Draw Line
        glBegin(GL_LINES);

        glColor3f(1.0, 0.0, 0.0); // Red color
        glVertex2f(-0.5, 0.0);

        glColor3f(0.0, 1.0, 0.0); // Green color
        glVertex2f(0.5, 0.0);

        glEnd();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
}