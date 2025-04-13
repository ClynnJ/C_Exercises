/*Celsius to fahrenheit conversion program*/

#include <stdio.h>

#define MIN -150 /*Minimun celsius temperature*/
#define MAX 150  /* Maximun celsius temperature*/
#define STEP 20  /*Increment amount in every conersion*/

int main(void)
{
    int celsius = MIN;
    double fahrenheit;

    printf("\t\tCelsius to Fahrenheit Conversion\n\n");

    while (celsius <= MAX)
    {
        fahrenheit = (celsius * (9.0 / 5.0)) + 32;
        printf("%5d C\370 = %8.1f F\370\n", celsius, fahrenheit);
        celsius += STEP;
    }

    return 0;
}
