#include <stdio.h>

int main() 
{
    int c = 0;

    for (int i = 0; i < 50; i++) 
    {
        while ((c = getchar()) != EOF)
        putchar(c);
    }

    printf("Press ENTER key to Continue\n");  
    getchar(); 

    return 0;
}