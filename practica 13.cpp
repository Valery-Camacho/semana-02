#include <stdio.h>

int main() {
    double a, b, c, R;

    printf("Ingrese el lado a: ");
    scanf("%lf", &a);
    printf("Ingrese el lado b: ");
    scanf("%lf", &b);
    printf("Ingrese el lado c: ");
    scanf("%lf", &c);

    printf("Ingrese el radio R: ");
    scanf("%lf", &R);

    double area = (a * b * c) / (4.0 * R);

    if (area == (int)area) {
        printf("El área del triángulo inscrito es: %.0lf\n", area);

    }

    return 0;
}
