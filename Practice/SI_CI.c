// WAP to find CI and SI //
#include <stdio.h>
#include <math.h>
int main()
{
    float p, r, t, A, SI, CI;
    scanf("%f %f %f", &p, &r, &t);
    SI = (p * r * t) / 100.0;
    A = pow((1 + r / 100.0), t);
    CI = (p * A) - p;
    printf("SI= %f CI= %f", SI, CI);
}