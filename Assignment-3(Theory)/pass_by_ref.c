#include <stdio.h>

void increment(int *n)
{
    (*n)++;
    printf("%d", *n);
}

int main()
{
    int n;
    scanf("%d", &n);
    increment(&n);
    return 0;
}