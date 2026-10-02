// WAP to find average of five numbers //
#include <stdio.h>
int main()
{
    float a, b, c, d, e, AVG;
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    AVG = (a + b + c + d + e) / 5.0;
    printf("Average = %f", AVG);
}