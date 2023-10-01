#include <stdio.h>

int main() 
{
    int c;

    // gets a character, assigns it to 'c' then tests if it is the end of file signal 
    while ((c = getchar()) != EOF) {
        // print the character 
        putchar(c);
    }
}