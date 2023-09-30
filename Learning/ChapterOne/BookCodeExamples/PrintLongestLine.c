#include <stdio.h>

#define MAXLINE 1000 // max input line size 

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

// print longest input line 
int main() 
{
    int len; //current line length
    int max; //maximum line length
    char line[MAXLINE]; //current input line
    char longest[MAXLINE]; //longest line saved here 

    max = 0;

    // set len equal to length of current input line 
    while ((len = mygetline(line, MAXLINE)) > 0) {
        // if input line is greater than the max 
        if (len > max) {
            // max is set equal to current lenght  
            max = len;
            // copy function is called, giving it a value of 1000 and the current input line value 
            copy(longest, line);
        }
    }
    if (max > 0) {
        // print out longest line 
        printf("%s", longest);
    }
    return 0;
}

// read a line into s, return length 
int mygetline(char s[], int lim) 
{
    int c, i;

    // while i is less than the maxline and input char is not equal to EOF and not \n 
    for (i = 0; i<lim-1 && (c=getchar()) != EOF && c!='\n'; ++i) {
        // set each character read from input in the 'i'th position of the character array 's' 
        s[i] = c;
    }
    // if c is equal to a new line 
    if (c == '\n') {
        // assign the new line character to the next position in the character array 
        s[i] = c;
        // moves the index 'i' to the next available position in the array so the next character read from input will be stored in the correct position 
        ++i;
    }
    // null-terminate the string to make it a valid c string 
    s[i] = '\0';
    // return the line length 
    return i;
}

// copy from into to, assume to is big enough 

// to = 1000  from = current input line 
void copy(char to[], char from[]) 
{
    int i;

    i = 0;

    // set to = current input line character by character until reaching the end 
    while ((to[i] = from[i]) != '\0') {
       
        ++i;
    }
}