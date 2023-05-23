#include <stdio.h>

// Without Perimeter
// void means no input

int sum()
// int sum(void)
{
    int x, y;
    scanf("%d %d", &x, &y);
    int sum = x + y;
    return sum;
}

int main()
{
    int ans = sum();
    printf("%d", ans);
    return 0;
}