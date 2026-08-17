#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X1, Y1, X2, Y2, Depth;
    int tx, ty; // Translation along X and Y only

    // Initialize graphics window
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)""); // Dev C++ compatible
    printf("3D Translation\n");
    // Input original rectangle
    printf("Enter top-left coordinates (X1 Y1): ");
    scanf("%d %d", &X1, &Y1);

    printf("Enter bottom-right coordinates (X2 Y2): ");
    scanf("%d %d", &X2, &Y2);

    Depth = (X2 - X1) / 4; // Fixed depth

    // Input translation values
    printf("Enter translation along X and Y (tx ty): ");
    scanf("%d %d", &tx, &ty);

    cleardevice(); // Clear screen

    // Draw original box in WHITE
    setcolor(WHITE);
    bar3d(X1, Y1, X2, Y2, Depth, 1);

    // Draw translated box in RED (depth unchanged)
    setcolor(WHITE);
    bar3d(X1 + tx, Y1 + ty, X2 + tx, Y2 + ty, Depth, 1);
    getch();

    closegraph();
    return 0;
}
