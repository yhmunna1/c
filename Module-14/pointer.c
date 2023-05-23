#include <stdio.h>

int main()
{
    int x = 10;
    // Pointer address 1.1
    printf("%p\n", &x);

    int *p = &x;
    // Pointer address 1.2
    printf("%p\n", p);

    // Value (Dereference)
    printf("%d\n", *p);

    // Change "x" value by using pointer
    *p = 500;
    printf("%d\n", x);
    return 0;
}