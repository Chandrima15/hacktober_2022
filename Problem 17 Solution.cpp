/*  a program to check for leap years and returns the string “YES” or “NO” without quotes accordingly */

#include <stdio.h>
int main ()
{

	int t;
	printf ("Enter a year :");
	scanf ("%d", &t);
	if ((t % 400 == 0) || (t % 4 == 0 && t % 100 != 0))
	printf ("YES");
	else
	printf ("NO");
	return 0;
}