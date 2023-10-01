#include <stdio.h>

// Print exercise 1-3 in reverse order fahr 300...0

int main() 
{
    float fahr, celsius; 
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = upper;
    
    printf("Fahr Celsius\n------------\n");
    while (fahr >= lower) {
        celsius = (5.0 / 9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr -= step;
    }
}