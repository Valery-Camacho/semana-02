#include <stdio.h>

int main() {
    int altura, base, perimetro;

    printf("Ingrese la altura del rectángulo: ");
    scanf("%d", &altura);
    printf("Ingrese la base del rectángulo: ");
    scanf("%d", &base);

    perimetro = 2 * (altura + base);

    printf("El perímetro del rectángulo es: %d\n", perimetro);

    return 0;
}
