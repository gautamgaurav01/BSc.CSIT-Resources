#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    int X1, Y1, X2, Y2, Depth;
    int choice;

    printf("3D Reflection\n");

    printf("Enter top-left coordinates (X1 Y1): ");
    scanf("%d %d", &X1, &Y1);

    printf("Enter bottom-right coordinates (X2 Y2): ");
    scanf("%d %d", &X2, &Y2);

    Depth = (X2 - X1) / 4;

    // Draw original cuboid in WHITE
    setcolor(WHITE);
    bar3d(X1, Y1, X2, Y2, Depth, 1);

    int CX = (X1 + X2) / 2;
    int CY = (Y1 + Y2) / 2;

    printf("\nReflection options:\n1. YZ-plane (flip X)\n2. XZ-plane (flip Y)\n3. XY-plane (flip Z)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    setcolor(WHITE); // Reflected cuboid in RED
    int offset = 200; // visual separation

    switch (choice)
    {
        case 1: // YZ-plane: X flips
        {
            int RX1 = 2*CX - X2;
            int RX2 = 2*CX - X1;
            bar3d(RX1 + offset, Y1, RX2 + offset, Y2, Depth, 1);
            break;
        }
        case 2: // XZ-plane: Y flipsa
        {
            int RY1 = 2*CY - Y2;
            int RY2 = 2*CY - Y1;
            bar3d(X1, RY1 + offset, X2, RY2 + offset, Depth, 1);
            break;
        }
        case 3: // XY-plane: Z flips
        {
            // Z flips: negative depth + shift to avoid overlap
            bar3d(X1 + offset, Y1 + offset, X2 + offset, Y2 + offset, -Depth, 1);
            break;
        }
        default:
            printf("Invalid choice\n");
            getch();
            closegraph();
            return 0;
    }

    getch();
    closegraph();
    return 0;
}
