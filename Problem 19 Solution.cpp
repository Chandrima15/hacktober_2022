/* C program to find roots of a Quadratic Equation, ??(??) = ????2 + ???? + ??. The program will take the coefficient(s) of the quadratic, linear, and constant term as input */

#include <stdio.h>
#include <math.h>
int main ()
{
	int a, b, c;
	float r1, r2, d, x, y;
	printf ("Enter a, b, c to find roots of a quadratic equation :");
	scanf ("%d %d %d", &a, &b, &c);
	d=b*b-4*a*c;
	if (a==0)
	{
		printf ("\n Not a quadratic equation");
	}
	else if (d==0)
	{
		r1=-b/(2.0*a);
		r2=r1;
		printf ("%.3f \n%.3f", r1, r2);
	}
	else if (d<0)
	{
		x=-b/2*a;
		y=(sqrt(-d))/2*a;
		printf ("%.3f+(i)%.3f\n%.3f-(i)%.3f", x, y, x, y);
	}
	else if (d>0)
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf ("%.3f \n%.3f", r1, r2);
	}
	return 0;
}