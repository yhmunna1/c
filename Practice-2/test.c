#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int a;
    long long int b;
    float c;
    char d;

    scanf("%d", &a);
    scanf("%lld", &b);
    scanf("%f", &c);
    scanf(" %c", &d);

    printf("%d\n%lld\n%.2f\n%c\n", a, b, c, d);
    return 0;
}
