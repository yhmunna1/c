#include <stdio.h>

int fun(int x, int y)
{
    int sum = x + y;
    printf("%d", sum);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    fun(x, y);
    return 0;
}