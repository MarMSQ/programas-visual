#include <stdio.h>
#include <math.h>
 
double calcularAreaTriangulo(float p1x, float p1y, float p2x, float p2y, float p3x, float p3y)
{
    float a, b, c, h1, b1, as;
 
    a = round(sqrt(pow(p1x - p2x, 2) + pow(p1y - p2y, 2)));
    b = round(sqrt(pow(p2x - p3x, 2) + pow(p2y - p3y, 2)));
    c = round(sqrt(pow(p1x - p3x, 2) + pow(p1y - p3y, 2)));
 
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
    {
        printf("Los segmentos no forman un triangulo.\n");
        return 0.0;
    }
    else
    {
        printf("Los segmentos forman un triangulo.\n");
        if (pow(c, 2) == pow(a, 2) + pow(b, 2))
        {
            printf("Es un triangulo rectángulo.\n");
        }
        else
        {
            printf("No es un triángulo rectangulo.\n");
        }
        h1 = round((a * b) / c);
        b1 = round(sqrt(pow(b, 2) - pow(h1, 2)));
        as = round((b1 * h1) / 2);
        return as;
    }
}
 
int main()
{
    float p1x, p1y, p2x, p2y, p3x, p3y;
    float area;
 
    printf("Ingrese las coordenadas del punto 1: (x y)\n");
    scanf("%f %f", &p1x, &p1y);
 
    printf("Ingrese las coordenadas del punto 2: (x y)\n");
    scanf("%f %f", &p2x, &p2y);
 
    printf("Ingrese las coordenadas del punto 3: (x y)\n");
    scanf("%f %f", &p3x, &p3y);
 
    area = calcularAreaTriangulo(p1x, p1y, p2x, p2y, p3x, p3y);
 
    printf("\nEl area seleccionada del triangulo es de: %.2f \n", area);
 
    return 0;
}