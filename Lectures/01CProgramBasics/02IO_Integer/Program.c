#include <stdio.h>

int main() 
{
    int value = 0;

    //Input
    printf("Enter an integer value: ");
    int return_value = scanf("%d", &value);
    
    //Process
    value++;

    //Output
    printf("Value incremented: %d \n", value);
    printf("scanf returned: %d \n", return_value);

    int c = getchar();

    return 0;
}
