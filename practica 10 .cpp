#include <stdio.h>

int main() {
    float b1, b2, h;
    int area;

    printf("Ingrese la longitud de la base 1 (b1): ");
    scanf("%f", &b1);
    printf("Ingrese la longitud de la base 2 (b2): ");
    scanf("%f", &b2);
    printf("Ingrese la altura (h): ");
    scanf("%f", &h);

    area = (int)((b1 + b2) * h / 2);

    printf("El área del trapecio es: %d\n", area);

    return 0;
}
