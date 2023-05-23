#include <stdio.h>

int main()
{
    int ar[5] = {10, 20, 30, 40, 50};

    // Index-1 (Same)
    printf("%d\n", ar[0]);
    printf("%d\n", *ar);

    // Index-2 (Same)
    printf("%d\n", ar[1]);
    printf("%d\n", *(ar + 1));
    printf("%d\n", 1 [ar]);
    printf("%d\n", *(1 + ar));
    return 0;
}