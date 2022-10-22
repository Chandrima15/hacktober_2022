/* C program to to take a temperature ?? as input in Fahrenheit(?) and convert it to Celsius(?), accurate up to
1 decimal place only */

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
	celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
    return 0;
}