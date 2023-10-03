#pragma warning(disable : 4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_LINE_BUFFER_SIZE 50

int main()
{
    char file_line[FILE_LINE_BUFFER_SIZE];

    FILE* fptr;

    fptr = fopen("Data.txt", "r");

    char* result = fgets(file_line, FILE_LINE_BUFFER_SIZE, fptr);

    while (result != 0)
    {
        

        printf("%s", file_line);

        result = fgets(file_line, FILE_LINE_BUFFER_SIZE, fptr);
    }

    fclose(fptr);

    int ch = getchar();
}
