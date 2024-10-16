#include <stdio.h>

int main() {
    float base, altura;
    int area;

    printf("Ingrese la longitud de la base del triángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del triángulo: ");
    scanf("%f", &altura);

    area = (int)((base * altura) / 2);

    printf("El área del triángulo es: %d\n", area);

    return 0;
}
