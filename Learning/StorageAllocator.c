#include <stdio.h>

#define ALLOCSIZE 10000 // available space 

static char allocbuf[ALLOCSIZE]; // storage for alloc 
static char *allocp = allocbuf; // could also have been written as: static char *allocp = &allocbuf[0]

char *alloc(int n) // return pointer to n characters  
{
    if (allocbuf + ALLOCSIZE - allocp >= n) {
        allocp += n;
        return allocp - n; // old p 
    }
    else {
        return 0; // abnormal, no space left 
    }
}

void afree(char *p) // free storage pointed to by p
{
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE) {
        allocp = p;
    }
} 