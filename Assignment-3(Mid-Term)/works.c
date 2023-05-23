#include <stdio.h>

int main()
{
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);
    int result = (d * m1) / m2;
    printf("%d", result);
    return 0;
}