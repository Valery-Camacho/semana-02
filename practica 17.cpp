#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    printf("Ingrese el lado a: ");
    scanf("%lf", &a);
    printf("Ingrese el lado b: ");
    scanf("%lf", &b);
    printf("Ingrese el lado c: ");
    scanf("%lf", &c);

    double p = (a + b + c) / 2;

    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("El área del triángulo es: %.2lf\n", area);
    
    return 0;
}
