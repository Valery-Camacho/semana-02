#include <stdio.h>

int main() {
    float a, b, c;
    int perimetro;

    printf("Ingrese la longitud del lado a: ");
    scanf("%f", &a);
    printf("Ingrese la longitud del lado b: ");
    scanf("%f", &b);
    printf("Ingrese la longitud del lado c: ");
    scanf("%f", &c);

    perimetro = (int)(a + b + c);

    printf("El perímetro del triángulo es: %d\n", perimetro);

    return 0;
}
