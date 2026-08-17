#include <graphics.h>
#include <conio.h>
#include <stdio.h>

void floodFill4(int x, int y, int fillColor, int borderColor)
{
    int currentColor = getpixel(x, y);
    if (currentColor != borderColor && currentColor != fillColor)
    {
        putpixel(x, y, fillColor);
        floodFill4(x + 1, y, fillColor, borderColor);
        floodFill4(x - 1, y, fillColor, borderColor);
        floodFill4(x, y + 1, fillColor, borderColor);
        floodFill4(x, y - 1, fillColor, borderColor);
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    int left, top, right, bottom, x, y;
    int fillColor = 4, borderColor = 15;
    printf("4-connected Flood Fill Algorithm\n");
    printf("Enter rectangle coordinates (left top right bottom): ");
    scanf("%d %d %d %d", &left, &top, &right, &bottom);
    printf("Enter flood fill starting point (x y): ");
    scanf("%d %d", &x, &y);

    rectangle(left, top, right, bottom);

    floodFill4(x, y, fillColor, borderColor);

    getch();
    closegraph();
    return 0;
}