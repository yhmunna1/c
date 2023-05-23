#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Exact row print
    int findRow = 3;
    for (int i = 0; i < col; i++)
    {
        printf("%d", a[findRow][i]);
    }
    printf("\n");

    // Exact col print
    int findCol = 3;
    for (int i = 0; i < col; i++)
    {
        printf("%d", a[i][findCol]);
    }

    return 0;
}

// Input
// 5 3
// 1 1 1
// 2 2 2
// 3 3 3
// 4 4 4
// 5 5 5