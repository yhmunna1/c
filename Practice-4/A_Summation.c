#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = sum + ar[i];
    }
    if (sum < 0)
    {
        sum = sum * -1;
        printf("%lld ", sum);
    }
    else
    {
        printf("%lld ", sum);
    }

    return 0;
}