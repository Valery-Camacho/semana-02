#include <stdio.h>

int main() {
    float d1, d2;
    int area;

    printf("Ingrese la longitud de la diagonal 1 (d1): ");
    scanf("%f", &d1);
    printf("Ingrese la longitud de la diagonal 2 (d2): ");
    scanf("%f", &d2);

    area = (int)((d1 * d2) / 2);

    printf("El área del rombo es: %d\n", area);

    return 0;
}
