/* C program to  allows the user to enter a number of quarters ??, dimes ??, and nickels ?? and then outputs
the monetary value of the coins in cents */

#include <stdio.h>
int  main ()
{
	int qu, di, ni, n, res = 0;
	scanf("%d %d %d %d", &qu, &di, &ni, &n);
	res += n*qu;
	res += n*n*di;
	res += n*n*n*ni;
	printf("%d", res);
	return 0;
}