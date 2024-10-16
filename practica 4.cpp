#include <stdio.h>

int main() {
    int altura, base , area;

    printf("Ingrese la altura del rectángulo: ");
    scanf("%d", &altura);
    printf("Ingrese la base del rectángulo: ");
    scanf("%d", &base);

    area = altura * base;

    printf("El área del rectángulo es: %d\n", area);

    return 0;
}
