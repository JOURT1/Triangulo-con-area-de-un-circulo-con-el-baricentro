#include <stdio.h>
#include <math.h>
#include "funciones.h"

float ingresarCoordenadaX()
{
    float x;
    printf("Ingresa la X\n");
    scanf("%f", &x);
    return x;
}

float ingresarCoordenadaY()
{
    float y;
    printf("Ingresa la Y\n");
    scanf("%f", &y);
    return y;
}

float obtenerBaricentroX(float x1, float x2, float x3)
{
    float bx = (x1 + x2 + x3) / 3;
    return bx;
}

float calcularArea(float x1, float y1, float x2, float y2, float x3, float y3, float bx, float by)
{
    float d1 = sqrt(pow((bx - x1), 2) + pow((by - y1), 2));
    float d2 = sqrt(pow((bx - x2), 2) + pow((by - y2), 2));
    float d3 = sqrt(pow((bx - x3), 2) + pow((by - y3), 2));

    if (d1 < d2 && d1 < d3)
    {
        float A = (3.14 * pow((d1), 2));
        printf("\nArea del circulo:%.2f", A);
    }
    else if (d2 < d3 && d2 < d3)
    {
        float A = (3.14 * pow((d2), 2));
        printf("\nArea del circulo:%.2f", A);
    }
    else if (d3 < d2 && d3 < d1)
    {
        float A = (3.14 * pow((d3), 2));
        printf("\nArea del circulo:%.2f", A);
    }
}
