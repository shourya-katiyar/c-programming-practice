// WAP to reverse the entered number //
#include <stdio.h>
int main()
{
    int a, n, s = 0;
    scanf("%d", &n);
    a = n % 10;
    s = s * 10 + a;
    n = n / 10;
    a = n % 10;
    s = s * 10 + a;
    n = n / 10;
    s = s * 10 + n;
    printf("Reverse order= %d", s);
}
