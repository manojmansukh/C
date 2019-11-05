#include <stdio.h>
#include <math.h>

int main()
{
    int num, root;

    
    printf("Enter any number to find square root: ");
    scanf("%lf", &num);

    
    root = sqrt(num);

   
    printf("Square root of %d = %d", num, root);

    return 0;
}
