#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (1000 <= n)
    {
        if (1500 <= n)
        {
            printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");
        }
        else if (1000 < n)
        {
            printf("I will buy Punjabi");
        }
        else
        {
            printf("Bad luck!");
        }
    }
    else
    {
        printf("Bad luck!");
    }
    return 0;
}