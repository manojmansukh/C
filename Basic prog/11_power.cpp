#include <stdio.h>
#include <math.h> 

int main()
{
    int base, expo, power;

   
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &expo);

    power = pow(base, expo);

    printf("%d ^ %d = %d", base, expo, power);

    return 0;
}
