#include <stdio.h>

int main() {
    int lado, perimetro;
    
    printf("Ingrese la longitud del lado del cuadrado: ");
    scanf("%d", &lado);

    perimetro = 4 * lado;

    printf("El perímetro del cuadrado es: %d\n", perimetro);

    return 0;
}

