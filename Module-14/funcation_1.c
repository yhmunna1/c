#include <stdio.h>

int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    int ans = sum(10, 20);
    printf("%d", ans);
    return 0;
}