#include <stdio.h>

int main() {
    double a, b, c;

    printf("Ingrese el lado a: ");
    scanf("%lf", &a);
    printf("Ingrese el lado b: ");
    scanf("%lf", &b);
    printf("Ingrese el lado c: ");
    scanf("%lf", &c);

    double r;
    printf("Ingrese el radio r: ");
    scanf("%lf", &r);

    double p = (a + b + c) / 2;

    double area = r * p;

     printf("El área del triángulo circunscrito es: %.0lf\n", area);
     
    return 0;
}
