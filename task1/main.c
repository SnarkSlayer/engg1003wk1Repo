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
"100" returns "100"
"word" returns "word"
"w0rd" reurnss "w0rd"
"100 word" returns "100"
"100word" returns "100"
"100w0rd" returns "100"
*/
