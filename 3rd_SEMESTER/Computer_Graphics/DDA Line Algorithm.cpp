#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    printf("DDA Line Algorithm\n");
    printf("Enter start point (x1,y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter end point (x2,y2): ");
    scanf("%d %d", &x2, &y2);

    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    float dx = x2 - x1;
    float dy = y2 - y1;
    float steps = (fabs(dx) > fabs(dy)) ? fabs(dx) : fabs(dy);
    float x_inc = dx / steps;
    float y_inc = dy / steps;
    float x = x1, y = y1;

    for (int i = 0; i <= steps; i++)
    {
        putpixel(round(x), round(y), WHITE);
        x += x_inc;
        y += y_inc;
    }

    getch();
    closegraph();
    return 0;
}
