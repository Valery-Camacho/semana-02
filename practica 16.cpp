#include <stdio.h>

int main() {
    double a, b, c;

    printf("Ingrese el lado a: ");
    scanf("%lf", &a);
    printf("Ingrese el lado b: ");
    scanf("%lf", &b);
    printf("Ingrese el lado c: ");
    scanf("%lf", &c);

    double semiperimetro = (a + b + c) / 2;

    printf("El semiperímetro del triángulo es: %.2lf\n", semiperimetro);

    return 0;
}
