#include <stdio.h>
#include <string.h>

// No need to pass the array value

void fun(char ar[])
{
    printf("%d", strlen(ar));
}

int main()
{
    char ar[20] = "Hello";
    fun(ar);
    return 0;
}