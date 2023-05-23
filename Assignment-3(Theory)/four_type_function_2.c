
// Has Return + No Parameter

#include <stdio.h>

int sum()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int sum = a * b;
    int sum2 = sum - c;
    return sum2;
}

int main()
{
    int ans = sum();
    printf("%d", ans);
    return 0;
}