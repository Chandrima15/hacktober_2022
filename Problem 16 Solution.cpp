/* C program for a simple binary calculator with 4 operations, +, –, ×, ÷. The program takes the
operator, 𝜇 as input. Also, it takes two numbers, 𝑎, 𝑏 as input and output the result, accurate up – to 2 decimal places */

#include <stdio.h>
int main ()
{
	int a,b;
	char c;
	float sum=0, difference, product, division;
	printf ("Enter two numbers and one operation :");
	scanf ("%d %d %c", &a, &b, &c);
	if (a>=0 && a<=1000 && b>=0 && b<=1000)
	{
		if (c=='+')
		{
			sum=a+b;
			printf ("%f", sum);
		}
		else if (c=='-')
		{
			difference=a-b;
			printf ("%f", difference);
		}
		else if (c=='*')
		{
			product=a*b;
			printf ("%f", product);
		}
		else if (c=='/')
		{
			division=a/b;
			printf ("%f", division);
		}
		return 0;
	}
}