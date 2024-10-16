#include <stdio.h>

int main() {
    int lado, area;

    printf("Ingrese la longitud del lado del cuadrado: ");
    scanf("%d", &lado);

    area = lado * lado;

    printf("El área del cuadrado es: %d\n", area);

    return 0;
}


