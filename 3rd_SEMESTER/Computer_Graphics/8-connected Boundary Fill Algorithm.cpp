#include <graphics.h> // For graphics functions
#include <conio.h>    // For getch()
#include <stdio.h>    // For printf(), scanf()

// 8-connected Boundary Fill function
void boundaryFill8(int x, int y, int fillColor, int borderColor)
{
    int currentColor = getpixel(x, y); // Get current pixel color

    // Fill only if pixel is not border color and not already filled
    if (currentColor != borderColor && currentColor != fillColor)
    {
        putpixel(x, y, fillColor); // Fill current pixel

        // Recursively fill all 8-connected neighbors
        boundaryFill8(x + 1, y, fillColor, borderColor);     // Right
        boundaryFill8(x - 1, y, fillColor, borderColor);     // Left
        boundaryFill8(x, y + 1, fillColor, borderColor);     // Down
        boundaryFill8(x, y - 1, fillColor, borderColor);     // Up
        boundaryFill8(x + 1, y + 1, fillColor, borderColor); // Down-Right
        boundaryFill8(x - 1, y + 1, fillColor, borderColor); // Down-Left
        boundaryFill8(x + 1, y - 1, fillColor, borderColor); // Up-Right
        boundaryFill8(x - 1, y - 1, fillColor, borderColor); // Up-Left
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)""); // Initialize graphics mode

    int left, top, right, bottom;
    int x, y;

    printf("8-Connected Boundary Fill Algorithm\n");

    // Take rectangle boundary from user
    printf("Enter rectangle coordinates (left top right bottom): ");
    scanf("%d %d %d %d", &left, &top, &right, &bottom);

    // Take starting fill point
    printf("Enter boundary fill starting point (x y): ");
    scanf("%d %d", &x, &y);

    // Draw boundary (white color)
    rectangle(left, top, right, bottom);

    int fillColor = 2;    // GREEN
    int borderColor = 15; // WHITE

    // Apply 8-connected boundary fill
    boundaryFill8(x, y, fillColor, borderColor);

    getch();      // Wait for key press
    closegraph(); // Close graphics mode
    return 0;
}