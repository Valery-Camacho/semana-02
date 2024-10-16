#include <stdio.h>
#include <math.h>

int main() {
    float d1, d2;
    int lado;

    printf("Ingrese la longitud de la diagonal 1 (d1): ");
    scanf("%f", &d1);
    printf("Ingrese la longitud de la diagonal 2 (d2): ");
    scanf("%f", &d2);

    lado = (int)(sqrt((d1 * d1) + (d2 * d2)) / 2);

    printf("La longitud del lado del rombo es: %d\n", lado);

    return 0;
}
