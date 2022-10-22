/* C program to take a temperature ?? as input in Celsius(?) and convert it to Fahrenheit(?), accurate up to
1 decimal place only. */

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
	printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
    return 0;
}