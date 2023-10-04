#include <stdio.h>

/*
// argc is an int that represents the number of CMD args passed to program
// argv is an array of strings where each element in the array is a pointer to a string containing one of the CMD arg 
int main(int argc, char *argv[]) 
{
    int i; 

    // iterate through CMD arguments 
    // initalized at 1 because argv[0] contains program name so we want to skip it 
    for (i = 1; i < argc; i++) {
                                // put a space if there are more args to print 
        printf("%s%s", argv[i], (i < argc-1) ? " " : "");
    }
    printf("\n");
    return 0;
}

*/

int main(int argc, char *argv[]) 
{
    // iterates through CMD arguments 
    while (--argc > 0) {
        
        // incrementing by 1 starts argv at 1, instead of 0 
        // print a space if there are more arguments to print 
        printf("%s%s", *++argv, (argc > 1) ? " " : "");
    }
    printf("\n");
    return 0;
}