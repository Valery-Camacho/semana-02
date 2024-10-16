#include <stdio.h>
#include <math.h>

int main() {
    int lado;
    float diagonal;

    printf("Ingrese la longitud del lado del cuadrado: ");
    scanf("%d", &lado);

    diagonal = sqrt(2) * lado;

    printf("La diagonal del cuadrado es: %.2f\n", diagonal);

    return 0;
}
