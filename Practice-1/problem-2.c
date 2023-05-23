#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a + b;
    printf("Sum: %d \n", sum);

    int sub = a - b;
    printf("Sub: %d \n", sub);

    int mult = a * b;
    printf("Mult: %d \n", mult);

    float c, d;
    scanf("%d %d", &c, &d);
    float div = c / d;
    printf("Div: %.2f \n", div);

    return 0;
}