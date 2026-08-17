#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

#define MAX_POINTS 20

long factorial(int n)
{
    long f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

long binomial(int n, int i)
{
    return factorial(n) / (factorial(i) * factorial(n - i));
}

void bezierPoint(int n, int Px[], int Py[], float t, float *x, float *y)
{
    *x = 0;
    *y = 0;
    for (int i = 0; i <= n; i++)
    {
        long c = binomial(n, i);
        float term = c * pow(t, i) * pow(1 - t, n - i);
        *x += term * Px[i];
        *y += term * Py[i];
    }
}

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");

    int n, i;
    int Px[MAX_POINTS], Py[MAX_POINTS];

    printf("Enter number of control points (max 20): ");
    scanf("%d", &n);
    n--; // degree = n-1

    printf("Enter control points (x y):\n");
    for (i = 0; i <= n; i++)
        scanf("%d %d", &Px[i], &Py[i]);

    // Draw control polygon (solid line)
    setlinestyle(SOLID_LINE, 0, 1);
    for (i = 0; i < n; i++)
        line(Px[i], Py[i], Px[i + 1], Py[i + 1]);

    // Draw Bezier curve (dotted line)
    setlinestyle(DOTTED_LINE, 0, 1);
    float t;
    int prevX = Px[0], prevY = Py[0];
    for (t = 0.0; t <= 1.0; t += 0.001)
    {
        float x, y;
        bezierPoint(n, Px, Py, t, &x, &y);
        line(prevX, prevY, (int)x, (int)y);
        prevX = (int)x;
        prevY = (int)y;
    }

    getch();
    closegraph();
    return 0;
}