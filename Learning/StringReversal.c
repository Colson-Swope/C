#include <stdio.h>
#include <string.h>

void reverseString(char str[]);

int main() 
{
    char str[] = "reverseme";
    printf("Normal String: %s\n", str);
    reverseString(str);
    printf("Reversed String: %s\n", str);
}

void reverseString(char str[]) 
{
    // find length of the given string 
    int length = strlen(str);

    // loop continues as long as i is less than half of the length of the string 
    // no need to swap characters beyond the mid-point  
    for (int i = 0; i < length / 2; i++) {
        // stores character at current position i in the string
        // temp saved so it can swap with a corresponding character from the end of the string 
        char temp = str[i];
        // assigns character from the end of the string to the current position in the string 
        str[i] = str[length - i -1];
        // assigns character stored in the temp variable 'temp' back to the end of the string, completing the swap 
        str[length - i -1] = temp;
    }
}