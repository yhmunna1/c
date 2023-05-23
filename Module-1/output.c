#include <stdio.h>

int main()
{
    // Input 10 20
    // int john, donal;
    // scanf("%d %d", &john, &donal);
    // printf("%d %d \n", john, donal);

    // Input 10% 20%
    // int a, b;
    // scanf("%d%% %d%%", &a, &b);
    // printf("%d%% %d%%", a, b);
    // return 0;

    // Input 10% 20% (Another way)
    int a, b;
    char p;
    scanf("%d%c %d%c", &a, &p, &b, &p);
    printf("%d%% %d%%", a, b);

    return 0;
}