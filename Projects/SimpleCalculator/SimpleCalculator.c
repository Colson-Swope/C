#include <stdio.h>

int main() 
{
    unsigned firstnumber, secondnumber; 
    int returnvalue;
    char operation; 

    do {

        printf("Input: ");
        scanf("%d %c %d", &firstnumber, &operation, &secondnumber);

        if (operation == '+') {
            returnvalue = firstnumber + secondnumber;
            printf("%d\n", returnvalue);
        }
        if (operation == '-') {
            returnvalue = firstnumber - secondnumber;
            printf("%d\n", returnvalue);
        }         
        if (operation == '*') {
            returnvalue = firstnumber * secondnumber;
            printf("%d\n", returnvalue);
        }
        if (operation == '/') {
            returnvalue = firstnumber / secondnumber;
            printf("%d\n", returnvalue);
        }

    } while (operation != '=');

    return 0; 
}