#include <graphics.h> // For graphics functions
#include <conio.h>    // For getch()
#include <stdio.h>    // For printf(), scanf()

// 8-connected flood fill function
void floodFill8(int x, int y, int fillColor, int borderColor)
{
    int currentColor = getpixel(x, y); // Get color of current pixel

    // Base condition: fill only if pixel is not border and not already filled
    if (currentColor != borderColor && currentColor != fillColor)
    {
        putpixel(x, y, fillColor); // Fill current pixel

        // Recursively fill in all 8 directions
        floodFill8(x + 1, y, fillColor, borderColor);     // Right
        floodFill8(x - 1, y, fillColor, borderColor);     // Left
        floodFill8(x, y + 1, fillColor, borderColor);     // Down
        floodFill8(x, y - 1, fillColor, borderColor);     // Up
        floodFill8(x + 1, y + 1, fillColor, borderColor); // Down-Right
        floodFill8(x - 1, y + 1, fillColor, borderColor); // Down-Left
        floodFill8(x + 1, y - 1, fillColor, borderColor); // Up-Right
        floodFill8(x - 1, y - 1, fillColor, borderColor); // Up-Left
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)""); // Initialize graphics mode

    int left, top, right, bottom, x, y;
    int fillColor = 4;    // RED
    int borderColor = 15; // WHITE
    printf("8-connected Flood Fill Algorithm\n");
    // Take rectangle coordinates and fill starting point from user
    printf("Enter rectangle coordinates (left top right bottom): ");
    scanf("%d %d %d %d", &left, &top, &right, &bottom);
    printf("Enter flood fill starting point (x y): ");
    scanf("%d %d", &x, &y);

    rectangle(left, top, right, bottom); // Draw boundary rectangle

    floodFill8(x, y, fillColor, borderColor); // Apply 8-connected flood fill

    getch();      // Wait for key press
    closegraph(); // Close graphics mode
    return 0;
}