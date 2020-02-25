#include <stdio.h>

int main()
{
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x); //Using %f for float instead of %d for int
    y = 2*x + 3*5;
    printf("y: %f\n", y);
    return 0;
}
