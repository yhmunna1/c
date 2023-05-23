#include <stdio.h>
int main()
{
    //  Int limit 1 er pore 9ta zeo (1000000000 ba 10 digit). Er theke boro (20 digit) hole long long int hobe. Int er theke boro hbe na
    int a = 1000000000;
    long long int b = 1000000000000;
    printf("Normal Int: %d \n", a);
    printf("Long long int: %lld \n", b);

    // --------------------------------------------------------------

    // Normally float point er pore 6-7 ta digit print kore. Er theke beshi chaile (15digit) float er poriborte double use korte hbe. And print er shomoy %lf use hbe.

    float g = 5.12345678;
    printf("%f \n", g);

    double h = 5.123456789012345;
    printf("%0.15lf", h);
    return 0;
}