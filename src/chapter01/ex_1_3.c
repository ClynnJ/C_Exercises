/*Fahrenheit to celsius conversion program*/

#include <stdio.h>

#define MIN 0   /*Minimun fahrenheit temperature*/
#define MAX 300 /* Maximun fahremheit temperature*/
#define STEP 20 /*Increment amount in every conersion*/

int main(void)
{
    int fahrenheit = MIN;
    double celsius;

    printf("\t\tFahrenheit to Celsius Conversion\n\n");

    while (fahrenheit <= MAX)
    {
        celsius = (fahrenheit - 32) * (5.0 / 9.0);
        printf("%3d F\370 = %6.1f C\370\n", fahrenheit, celsius);
        fahrenheit += STEP;
    }

    return 0;
}
