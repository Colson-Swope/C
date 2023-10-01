#include <stdio.h>

int main() 
{
    int c;
    int d;

    c = EOF;
    d = getchar() != EOF;

    printf("EOF Value is: %d\n", c);
    printf("Expression Value is: %d\n", d);
    return 0;
}