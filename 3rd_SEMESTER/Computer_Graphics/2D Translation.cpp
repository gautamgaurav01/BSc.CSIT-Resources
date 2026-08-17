/*
Program: 2-D Translation

Sample Input:
Enter x1 y1: 100 100
Enter x2 y2: 150 100
Enter x3 y3: 125 150
Enter translation tx ty: 80 60

*/

#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    int x1, y1, x2, y2, x3, y3;
    int tx, ty;
    printf("2-D Translation\n");
    // Input original triangle coordinates
    printf("Enter x1 y1: ");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2 y2: ");
    scanf("%d %d", &x2, &y2);

    printf("Enter x3 y3: ");
    scanf("%d %d", &x3, &y3);

    // Input translation values
    printf("Enter translation tx ty: ");
    scanf("%d %d", &tx, &ty);

    // Draw original triangle
    setcolor(WHITE);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Apply translation
    int x1_new = x1 + tx;
    int y1_new = y1 + ty;

    int x2_new = x2 + tx;
    int y2_new = y2 + ty;

    int x3_new = x3 + tx;
    int y3_new = y3 + ty;

    // Draw translated triangle
    setcolor(WHITE);
    line(x1_new, y1_new, x2_new, y2_new);
    line(x2_new, y2_new, x3_new, y3_new);
    line(x3_new, y3_new, x1_new, y1_new);

    getch();
    closegraph();
    return 0;
}
