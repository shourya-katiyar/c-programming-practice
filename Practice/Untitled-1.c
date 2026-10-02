// WAP to find sum of digit of entered number //
#include <stdio.h>
int main()
{
    int n, a, s = 0;
    scanf("%d", &n);
    a = n % 10;
    s = s + a;
    n = n / 10;
    a = n % 10;
    s = s + a;
    n = n / 10;
    s = s + n;
    printf("Sum of digits= %d", s);
}
