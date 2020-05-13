#include <stdio.h>

#define _ABS(number) (number > 0 ? number : -number)

double abs(double number);
float abs(float number);
int abs(int number);

int main() {
    int a = -5;
    float b = -10.5;
    double c = 19.999452;

    printf("abs(-5): %d\n", abs(a));
    printf("abs(-5): %f\n", abs(b));
    printf("abs(-5): %lf\n\n\n", abs(c));

    printf("ingrese un numero: ");
    scanf("%f", &input);
    printf("abs(%f): %f", input, abs(input));

    return 0;
}

int abs(int number) {
    return _ABS(number);
}

double abs(double number) {
    return _ABS(number);
}

float abs(float number) {
    return _ABS(number);
}