#include <stdio.h>

int main() 
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower; 

    // int is converted into float before operation is done 
    while (fahr <= upper) 
    {
        celsius = (5.0/9.0) * (fahr-32.0); // un able to use 5/9 because int division would truncate it to zero 
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}