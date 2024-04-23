#include <stdio.h>
#include <math.h>
#include <conio.h>

double calcularHipotenusa(int cateto1, int cateto2) {
    return sqrt(pow(cateto1, 2) + pow(cateto2, 2));
}

double calcularDistancia(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double calcularArea(double base, double altura) {
    return base * altura / 2;
}

int main() {
    int compX[3], compY[3];
    double altura, base, cateto, area, hip, raiz;
    double dist[3];

    for (int i = 0; i < 3; i++) {
        printf("Ingrese el componente x e y del punto %i\n", i + 1);
        scanf("%i %i", &compX[i], &compY[i]);
    }

    dist[0] = calcularDistancia(compX[0], compY[0], compX[1], compY[1]);
    dist[1] = calcularDistancia(compX[0], compY[0], compX[2], compY[2]);
    dist[2] = calcularDistancia(compX[1], compY[1], compX[2], compY[2]);

    if (dist[0] > dist[1] && dist[0] > dist[2]) {
        altura = dist[1] * dist[2] / dist[0];
        cateto = dist[1];

        if (dist[1] + dist[2] <= dist[0]) {
            goto msj;
        }

        raiz = calcularHipotenusa(dist[1], dist[2]);
        if ((round(raiz)) != (round(dist[0]))) {
            goto end;
        }
    } else if (dist[1] > dist[0] && dist[1] > dist[2]) {
        altura = dist[0] * dist[2] / dist[1];
        cateto = dist[2];

        if (dist[0] + dist[2] <= dist[1]) {
            goto msj;
        }

        raiz = calcularHipotenusa(dist[0], dist[2]);
        if ((round(raiz)) != (round(dist[1]))) {
            goto end;
        }
    } else {
        altura = dist[0] * dist[1] / dist[2];
        cateto = dist[0];

        if (dist[1] + dist[0] <= dist[2]) {
            goto msj;
        }

        raiz = calcularHipotenusa(dist[1], dist[0]);
        if ((round(raiz)) != (round(dist[2]))) {
            goto end;
        }
    }

    base = sqrt(pow(cateto, 2) - pow(altura, 2));
    area = calcularArea(base, altura);

    printf("El area sombreada es de %lf \n", area);
    if (1 != 1) {
        msj:
        printf("No es un triangulo\n");
    }
    if (1 != 1) {
        end:
        printf("El triangulo no es rectangulo\n");
    }

    getch();

    return 0;
}
