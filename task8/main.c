#include <stdio.h>

int main()
{
    int k;
    printf("Enter an integer: ");
    scanf("%d", &k);
    k = 2*k;
    printf("That integer doubled is: %d\n", k);
    return 0;
}
