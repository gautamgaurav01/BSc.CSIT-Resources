#include <graphics.h> // For graphics functions like initgraph() and putpixel()
#include <conio.h>    // For getch()
#include <stdio.h>    // For printf(), scanf()
#include <stdlib.h>   // For abs()

// Function to plot all 4 symmetrical points of an ellipse
void plotEllipsePoints(int x, int y, int xc, int yc)
{
    putpixel(xc + x, yc + y, WHITE); // Quadrant I
    putpixel(xc - x, yc + y, WHITE); // Quadrant II
    putpixel(xc + x, yc - y, WHITE); // Quadrant IV
    putpixel(xc - x, yc - y, WHITE); // Quadrant III
}

int main()
{
    int xc, yc, rx, ry;

    printf("Midpoint Ellipse Drawing Algorithm\n");
    printf("Enter center of ellipse (xc yc): ");
    scanf("%d %d", &xc, &yc);
    printf("Enter x-radius (rx): ");
    scanf("%d", &rx);
    printf("Enter y-radius (ry): ");
    scanf("%d", &ry);

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)""); // Initialize graphics mode

    int x = 0;
    int y = ry;

    // Decision parameters for region 1
    int rx2 = rx * rx;
    int ry2 = ry * ry;
    int two_rx2 = 2 * rx2;
    int two_ry2 = 2 * ry2;

    int px = 0;
    int py = two_rx2 * y;

    // Region 1 (slope < 1)
    int p1 = ry2 - (rx2 * ry) + (0.25 * rx2); // Initial decision parameter
    while (px < py)
    {
        plotEllipsePoints(x, y, xc, yc);
        x++;
        px += two_ry2;
        if (p1 < 0)
        {
            p1 += ry2 + px;
        }
        else
        {
            y--;
            py -= two_rx2;
            p1 += ry2 + px - py;
        }
    }

    // Region 2 (slope >= 1)
    int p2 = ry2 * (x + 0.5) * (x + 0.5) + rx2 * (y - 1) * (y - 1) - rx2 * ry2;
    while (y >= 0)
    {
        plotEllipsePoints(x, y, xc, yc);
        y--;
        py -= two_rx2;
        if (p2 > 0)
        {
            p2 += rx2 - py;
        }
        else
        {
            x++;
            px += two_ry2;
            p2 += rx2 - py + px;
        }
    }

    getch();      // Wait for key press
    closegraph(); // Close graphics mode
    return 0;
}