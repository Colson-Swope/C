#include <stdio.h>

int main() 
{
    long nc;

    nc = 0;

    // gets a character, assigns it to 'c' then tests if it is the end of file signal 
    while (getchar() != EOF) {
        // adds one to the nc variable for each character 
        ++nc;
    }
    // prints the result 
    printf("%ld\n", nc);
}