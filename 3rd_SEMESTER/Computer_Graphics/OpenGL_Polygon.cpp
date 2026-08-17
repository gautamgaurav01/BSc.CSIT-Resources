#include <glew.h>
#include <glfw3.h>

int main()
{
    // Initialize GLFW
    if (!glfwInit())
        return -1;

    // Create window
    GLFWwindow *window = glfwCreateWindow(800, 600, "OpenGL Polygon", NULL, NULL);

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

        // Draw Polygon (Pentagon)
        glBegin(GL_POLYGON);

        glColor3f(1.0, 0.0, 0.0); // Red
        glVertex2f(0.0, 0.5);

        glColor3f(0.0, 1.0, 0.0); // Green
        glVertex2f(0.5, 0.1);

        glColor3f(0.0, 0.0, 1.0); // Blue
        glVertex2f(0.3, -0.5);

        glColor3f(1.0, 1.0, 0.0); // Yellow
        glVertex2f(-0.3, -0.5);

        glColor3f(1.0, 0.0, 1.0); // Magenta
        glVertex2f(-0.5, 0.1);

        glEnd();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
}