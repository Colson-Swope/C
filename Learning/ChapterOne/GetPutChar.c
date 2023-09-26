#include <stdio.h>

int main() 
{
    // int c;

    // while ((c = getchar()) != EOF) 
    // {
    //     putchar(c);
    // }

    long nc;
    while (getchar() != EOF) 
    {
        ++nc;
    }
    printf("%ld\n", nc);
}