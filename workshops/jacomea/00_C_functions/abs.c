#include <stdio.h>

#define ABS(number) (number > 0 ? number : -number)

int main() {
    int a = -5;
    float b = -10.5;
    double c = 19.999452;

    printf("ABS(%d): %d\n", a, ABS(a));
    printf("ABS(%f): %f\n", b, ABS(b));
    printf("ABS(%lf): %lf\n\n\n", c, ABS(c));

    float input;

    printf("ingrese un numero: ");
    scanf("%f", &input);
    printf("ABS(%f): %f\n", input, ABS(input));

    return 0;
}