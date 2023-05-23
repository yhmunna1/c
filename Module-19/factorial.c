#include <stdio.h>

long long int fun(long long int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
    {
        long long int ans = fun(n - 1);
        return n * ans;
    }
}

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int count = fun(n);
    printf("%llu\n", count);
    return 0;
}