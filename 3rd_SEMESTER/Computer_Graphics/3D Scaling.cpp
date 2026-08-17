#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    int X1, Y1, X2, Y2, Depth;
    float Sx, Sy; // scaling factors

    printf("3D Scaling\n");

    // Input cuboid coordinates
    printf("Enter top-left coordinates (X1 Y1): ");
    scanf("%d %d", &X1, &Y1);

    printf("Enter bottom-right coordinates (X2 Y2): ");
    scanf("%d %d", &X2, &Y2);

    // Calculate default depth
    Depth = (X2 - X1) / 4;

    // Draw original cuboid in WHITE
    setcolor(WHITE);
    bar3d(X1, Y1, X2, Y2, Depth, 1);

    // Input scaling factors
    printf("Enter scaling factor  (Sx Sy): ");
    scanf("%f %f", &Sx, &Sy);

    // Calculate cuboid center
    int MX = (X1 + X2) / 2;
    int MY = (Y1 + Y2) / 2;

    // Scale coordinates relative to center
    int X1s = MX + (X1 - MX) * Sx;
    int Y1s = MY + (Y1 - MY) * Sy;
    int X2s = MX + (X2 - MX) * Sx;
    int Y2s = MY + (Y2 - MY) * Sy;

    // Scale depth
    int Depths;
    if(X2s > X1s)
        Depths = (X2s - X1s) / 4 ;
    else
        Depths = (X1s - X2s) / 4;

    // Draw scaled cuboid in RED
    setcolor(WHITE);
    int offset = 200;
    bar3d(X1s+ offset, Y1s+ offset, X2s+ offset, Y2s+ offset, Depths, 1);

    getch();
    closegraph();
    return 0;
}
