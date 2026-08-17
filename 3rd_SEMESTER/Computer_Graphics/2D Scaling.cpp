#include <graphics.h>
#include <stdio.h>
#include <math.h>
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
    float sx, sy;
    printf("2D Scaling\n");
    // Input triangle vertices
    printf("Enter x1 y1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter x2 y2: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter x3 y3: ");
    scanf("%d %d", &x3, &y3);

    // Draw original triangle in WHITE
    drawTriangle(x1, y1, x2, y2, x3, y3, WHITE);

    // Input scaling factors
    printf("Enter scaling factors sx sy: ");
    scanf("%f %f", &sx, &sy);

    // Scale triangle coordinates (about origin)
    int x1_new = round(x1 * sx), y1_new = round(y1 * sy);
    int x2_new = round(x2 * sx), y2_new = round(y2 * sy);
    int x3_new = round(x3 * sx), y3_new = round(y3 * sy);

    // Draw scaled triangle in RED
    drawTriangle(x1_new, y1_new, x2_new, y2_new, x3_new, y3_new, WHITE);

    getch();
    closegraph();
    return 0;
}
