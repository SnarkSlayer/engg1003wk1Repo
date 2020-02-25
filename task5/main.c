#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    scanf("%d", &k);
    printf("You entered: %d\n", k);
    return 0;
}

/*
Removing closing " on line 8 ceates 3 errors:
- missing "on ln 8
- expected expresion before 'return' on ln 9
- Expected ; before }
*/
