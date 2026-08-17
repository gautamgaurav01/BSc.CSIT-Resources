#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

int main() {
    int X1, Y1, X2, Y2, Depth;
    int MX, MY; 
    float angle;

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");  // Dev C++ compatible
    printf("3D Rotation\n");
    // Input rectangle
    printf("Enter top-left coordinates (X1 Y1): ");
    scanf("%d %d", &X1, &Y1);

    printf("Enter bottom-right coordinates (X2 Y2): ");
    scanf("%d %d", &X2, &Y2);

    Depth = (X2 - X1) / 4;
    MX = (X1 + X2) / 2;
    MY = (Y1 + Y2) / 2;

    // -------- Show Original --------
    setcolor(WHITE);
    bar3d(X1, Y1, X2, Y2, Depth, 1);

    printf("Original image displayed. Press any key to rotate.\n");
    getch();

    // -------- Take Rotation Angle --------
    printf("Enter rotation angle in degrees: ");
    scanf("%f", &angle);

    cleardevice();  // Remove original image

    // Convert angle to radians
    float rad = angle * 3.14159265 / 180.0;

    // Rotate coordinates
    int A1 = MX + (X1 - MX) * cos(rad) - (Y1 - MY) * sin(rad);
    int B1 = MY + (X1 - MX) * sin(rad) + (Y1 - MY) * cos(rad);
    int A2 = MX + (X2 - MX) * cos(rad) - (Y2 - MY) * sin(rad);
    int B2 = MY + (X2 - MX) * sin(rad) + (Y2 - MY) * cos(rad);
	if(A2>A1)
	{
		Depth = (A2-A1)/4;
	}
	else {
		Depth =(A1-A2)/4;
	}
    // -------- Show Rotated --------
    setcolor(WHITE);
    bar3d(A1, B1, A2, B2, Depth, 1);

    printf("Rotated image displayed. Press any key to exit.\n");
    getch();

    closegraph();
    return 0;
}
