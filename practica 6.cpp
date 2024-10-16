#include <stdio.h>
#include <math.h>

int main() {
    int altura, base;
    double diagonal;

    printf("Ingrese la altura del rectángulo: ");
    scanf("%d", &altura);
    printf("Ingrese la base del rectángulo: ");
    scanf("%d", &base);

    diagonal = sqrt((altura * altura) + (base * base));

    printf("La diagonal del rectángulo es: %.2f\n", diagonal);

    return 0;
}
