#include <graphics.h> // For graphics functions
#include <conio.h>    // For getch()
#include <stdio.h>    // For printf(), scanf()

// 4-connected Boundary Fill function
void boundaryFill4(int x, int y, int fillColor, int borderColor)
{
    int currentColor = getpixel(x, y); // Get current pixel color

    // Fill only if pixel is not border color and not already filled
    if (currentColor != borderColor && currentColor != fillColor)
    {
        putpixel(x, y, fillColor); // Fill current pixel

        // Recursively fill 4-connected neighbors
        boundaryFill4(x + 1, y, fillColor, borderColor); // Right
        boundaryFill4(x - 1, y, fillColor, borderColor); // Left
        boundaryFill4(x, y + 1, fillColor, borderColor); // Down
        boundaryFill4(x, y - 1, fillColor, borderColor); // Up
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)""); // Initialize graphics mode

    int left, top, right, bottom;
    int x, y;

    printf("4-Connected Boundary Fill Algorithm\n");

    // Take rectangle boundary from user
    printf("Enter rectangle coordinates (left top right bottom): ");
    scanf("%d %d %d %d", &left, &top, &right, &bottom);

    // Take starting fill point
    printf("Enter boundary fill starting point (x y): ");
    scanf("%d %d", &x, &y);

    // Draw boundary (white color)
    rectangle(left, top, right, bottom);

    int fillColor = 4;    // RED
    int borderColor = 15; // WHITE

    // Apply boundary fill
    boundaryFill4(x, y, fillColor, borderColor);

    getch();      // Wait for key press
    closegraph(); // Close graphics mode
    return 0;
}