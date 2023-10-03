#pragma warning(disable : 4996)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE* fptr;

    fptr = fopen("Data.txt", "r");

    int result = fscanf(fptr, "%d", &num);

    printf("Value of n=%d", num);

    fclose(fptr);

    int ch = getchar();

    return 0;
}
