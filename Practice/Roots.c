// WAP to find roots of quadratic equation //
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, p, q, d;
    scanf("%f %f %f", &a, &b, &c);
    d = (b * b) - (4 * a * c);
    p = (-b + sqrt(d)) / (2.0 * a);
    q = (-b - sqrt(d)) / (2.0 * a);
    printf("ROOTS= %f %f", p, q);
}