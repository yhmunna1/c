#include <stdio.h>

int main()
{
    int n, p, v;
    scanf("%d", &n);
    int ar[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        scanf("%d", ar[i]);
    }
    return 0;
}