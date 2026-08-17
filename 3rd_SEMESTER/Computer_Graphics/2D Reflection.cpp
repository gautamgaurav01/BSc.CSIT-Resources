#include <graphics.h>
#include <stdio.h>
#include <conio.h>

// Function to draw a triangle
void drawTriangle(int x1, int y1, int x2, int y2, int x3, int y3, int color)
{
    setcolor(color);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

int main()
{
    int gd = DETECT, gm;
    initwindow(800, 600); // Open graphics window

    int x1, y1, x2, y2, x3, y3;
    int x1n, y1n, x2n, y2n, x3n, y3n;
    int choice;
    printf("2D Reflection\n");
    // Input triangle vertices
    printf("Enter x1 y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2 y2: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter x3 y3: ");
    scanf("%d %d", &x3, &y3);

    // Draw original triangle in WHITE
    drawTriangle(x1, y1, x2, y2, x3, y3, WHITE);

    // Menu for reflection
    printf("Reflection options:\n1. X-axis\n2. Y-axis\n3. Origin\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: // Reflection about X-axis (flip vertically)
        x1n = x1;
        y1n = 600 - y1;
        x2n = x2;
        y2n = 600 - y2;
        x3n = x3;
        y3n = 600 - y3;
        break;
    case 2: // Reflection about Y-axis (flip horizontally)
        x1n = 800 - x1;
        y1n = y1;
        x2n = 800 - x2;
        y2n = y2;
        x3n = 800 - x3;
        y3n = y3;
        break;
    case 3: // Reflection about Origin
        x1n = 800 - x1;
        y1n = 600 - y1;
        x2n = 800 - x2;
        y2n = 600 - y2;
        x3n = 800 - x3;
        y3n = 600 - y3;
        break;
    default:
        printf("Invalid choice");
        getch();
        closegraph();
        return 0;
    }

    // Draw reflected triangle in RED
    drawTriangle(x1n, y1n, x2n, y2n, x3n, y3n, WHITE);

    getch();
    closegraph();
    return 0;
}
