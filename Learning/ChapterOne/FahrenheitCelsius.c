#include <stdio.h>

/* print fahrenheit-celsius table 
   test comment return*/

int main() 
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    while (fahr <= upper) 
    {
        celsius = 5 * (fahr-32) / 9;
        printf("%3d\t%3d\n", fahr, celsius);
        fahr = fahr + step;
    }
}

// 16 bit ints lie between -32768 and +32767
// float is typically a 32 bit quantity 
// char is a single byte / character 
// short is a short integer 
// long is a long integer 
// double is a double precision floating point 
// integer divison truncates. float division fixes this
// %d represents printing a integer 