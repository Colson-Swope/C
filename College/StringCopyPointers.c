#include <stdio.h>

void mystrcpy(char *s, char *t);
int mystrcmp(char *ss, char *tt);

int main() 
{
    char stringone[] = "copyme";
    char stringtwo[] = "testing";

    mystrcpy(stringone, stringtwo);
    printf("%s\n", stringone);
    printf("%s\n", stringtwo);

    mystrcmp(stringone, stringtwo);

}

void mystrcpy(char *s, char *t) 
{
    while ((*s++ = *t++) != '\0') {
        ;
    }
}

int mystrcmp(char *ss, char *tt) 
{
    for ( ; *ss == *tt; ss++, tt++) {
        if (*ss == '\0') {
            return 0;
        }
    }
    return *ss - *tt;
}