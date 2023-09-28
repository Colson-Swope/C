#include <stdio.h>

int main()
{
    int c;
    int d; 
    c = EOF;
    d = getchar() != EOF;

    while(c == EOF) 
    {
        printf("The EOF value is: %d\n", c);
        printf("The expression value is: %d\n", d);
    }
    
}