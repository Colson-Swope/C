#include <stdio.h>

int main() 
{
    int c, i, nwhite, nother;
    int ndigit[10];

    nwhite = nother = 0;

    // initialize array with zeros 
    for (i = 0; i < 10; i++) {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            // increments the value in the ndigit array at the index corresponding to the digit represented by c. For example, if c is '3', it would increment ndigit[3] because '3' - '0' equals 3.
            ++ndigit[c-'0'];
        }
        else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        }
        else {
            ++nother;
        }
    }

    printf("digits =");
    for (i = 0; i < 10; ++i) {
        printf(" %d", ndigit[i]);
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
}