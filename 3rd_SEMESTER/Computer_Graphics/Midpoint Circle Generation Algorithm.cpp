#include <graphics.h> // For graphics functions
#include <conio.h>    // For getch()
#include <stdio.h>    // For printf(), scanf()
#include <stdlib.h>   // For abs()

// Function to plot all 8 symmetrical points of a circle
void plotCirclePoints(int h, int k, int x, int y)
{
    putpixel(h + x, k + y, WHITE);
    putpixel(h - x, k + y, WHITE);
    putpixel(h + x, k - y, WHITE);
    putpixel(h - x, k - y, WHITE);
    putpixel(h + y, k + x, WHITE);
    putpixel(h - y, k + x, WHITE);
    putpixel(h + y, k - x, WHITE);
    putpixel(h - y, k - x, WHITE);
}

int main()
{
    int h, k, r;

    printf("Midpoint Circle Generation Algorithm\n");
    printf("Enter center of circle (h k): ");
    scanf("%d %d", &h, &k);
    printf("Enter radius of circle r: ");
    scanf("%d", &r);

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)""); // Initialize graphics mode

    int x = 0; // Start at (0, r)
    int y = r;
    int p = 1 - r; // Decision parameter

    plotCirclePoints(h, k, x, y); // Plot initial points

    while (x < y)
    {
        x++;
        if (p < 0)
        {
            // Choose East pixel
            p = p + 2 * x + 1;
        }
        else
        {
            // Choose South-East pixel
            y--;
            p = p + 2 * (x - y) + 1;
        }
        plotCirclePoints(h, k, x, y); // Plot all 8 symmetrical points
    }

    getch();      // Wait for key press
    closegraph(); // Close graphics mode
    return 0;
}
