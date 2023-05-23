#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int S, A, B, C;
        scanf("%d %d %d %d", &S, &A, &B, &C);
        int sum = A + B + C;
        printf("%d\n", S - sum);
    }

    return 0;
}

// Input
// 3
// 20 2 4 1
// 15 5 5 5
// 30 10 5 3