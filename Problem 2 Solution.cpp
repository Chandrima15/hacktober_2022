/* Problem 2 */

#include <stdio.h>
int main ()
{
	int a, b;
	printf ("Input two numbers");
	scanf ("%d %d", &a, &b);
	printf ("%d %d %d %f", a+b, a-b, a*b, a/b);
	return 0;
}