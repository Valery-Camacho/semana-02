#include <stdio.h>

int main() {
    int lado, perimetro;

    printf("Ingrese la longitud del lado del rombo: ");
    scanf("%d", &lado);

    perimetro = 4 * lado;

    printf("El perímetro del rombo es: %d\n", perimetro);

    return 0;
}
