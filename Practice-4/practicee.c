#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);

        if (ar[i] > 0)
        {
            sum = sum + ar[i];
        }
    }
    printf("%d ", sum);
    return 0;
}