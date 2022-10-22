/* C program that takes 2 numbers, ?? and ?? as input and return the minimum between them */

#include <stdio.h>
int main ()
{
	int num1, num2;
	printf ("Enter any two numbers :");
	scanf ("%d %d", &num1, &num2);
	if (num1 > num2) {
		printf ("The minimun number is = %d", num2);
	} else {
		printf ("The minimum number is = %d", num1);
	}
	return 0;
}