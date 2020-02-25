#include <stdio.h>

int main()
{
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x);
    y = 9*x + 32;
    printf("y1: %f\n", y);
    y = x / (1 - x);
    printf("y2: %f\n", y);
    y = x*x + 2*x;
    printf("y3: %f\n", y);
    y = (x + 2) / (x - 1);
    printf("y4: %f\n", y);
    return 0;
}
