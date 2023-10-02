#include <stdio.h>

struct key {
    char *word;
    int count;
}; // keytab[];

// see above for alt way of declare 
struct key keytab[] = {
    "auto", 0,
    "break", 0, 
    "case", 0,
    "char", 0,
    "const", 0,
    "continue", 0,
    "default", 0,
    /* ... */
    "unsigned", 0,
    "void", 0,
    "volatile", 0,
    "while", 0
};

int main() 
{

    return 0;
}