#include <stdio.h>
#include <string.h>

void reverseString(char ustring, char rstring, int stringlength);

int main() 
{
    char ustring[50];
    char rstring[50];
    int stringlength;

    do {

        printf("Enter a string of text (1 to quit): ");
        scanf("%s", &ustring);
    
        stringlength = strlen(ustring);

        for (int i = 0; i <= stringlength; i++) {
            rstring[i] = ustring[stringlength - 1 - i];
        }

    printf("%s\n", rstring);

    } while (ustring[0] != '1');
}
 