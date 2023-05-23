#include <stdio.h>

void decrement(int n)
{
    n--;
    printf("%d", n);
}

int main()
{
    int n;
    scanf("%d", &n);
    decrement(n);
    return 0;
}