/* C program that takes 3 numbers, ??, ?? and ?? as input and return the maximum amongst them */

#include <stdio.h>
int main ()
{
	int a, b, c, max;
	printf ("Enter the number :");
	scanf ("%d %d %d", &a, &b, &c);
	if (a>=0 && a<=100000 && b>=0 && b<=100000 && c>=0 && c<=100000)
	{
		max=((a>b?(a>c?a:c):(b>c?b:c)));
		printf ("%d", max);
	}
	else
	printf ("Out of range");
	return 0;
}