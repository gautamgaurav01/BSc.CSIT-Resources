#include <graphics.h> // For graphics functions like initgraph() and putpixel()
#include <conio.h>    // For getch()
#include <stdio.h>    // For printf() and scanf()
#include <stdlib.h>   // For abs()

int main()
{
    int x1, y1, x2, y2;

    printf("Bresenham Line Drawing Algorithm\n");

    // Input start and end points
    printf("Enter start point (x1 y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter end point (x2 y2): ");
    scanf("%d %d", &x2, &y2);

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)""); // Initialize graphics mode

    int dx = abs(x2 - x1); // Difference in x
    int dy = abs(y2 - y1); // Difference in y

    int x = x1; // Starting x
    int y = y1; // Starting y

    int sx = (x2 >= x1) ? 1 : -1; // Step direction in x
    int sy = (y2 >= y1) ? 1 : -1; // Step direction in y

    putpixel(x, y, 2); // Plot first point (start point) in color 2

    // Case 1: slope <= 1 (dx >= dy)
    if (dx >= dy)
    {
        int p = 2 * dy - dx; // Decision parameter
        while (x != x2)
        {            // Loop until x reaches x2
            x += sx; // Move in x-direction
            if (p < 0)
            {
                // Choose East pixel
                p += 2 * dy;
            }
            else
            {
                // Choose North-East pixel
                y += sy;
                p += 2 * dy - 2 * dx;
            }
            putpixel(x, y, 7); // Plot pixel in color 7
        }
    }
    // Case 2: slope > 1 (dx < dy)
    else
    {
        int p = 2 * dx - dy; // Decision parameter
        while (y != y2)
        {            // Loop until y reaches y2
            y += sy; // Move in y-direction
            if (p < 0)
            {
                // Choose North pixel
                p += 2 * dx;
            }
            else
            {
                // Choose North-East pixel
                x += sx;
                p += 2 * dx - 2 * dy;
            }
            putpixel(x, y, 7); // Plot pixel in color 7
        }
    }

    getch();      // Wait for key press
    closegraph(); // Close graphics mode
    return 0;
}