/* C program that takes 3 angles, 𝛼, 𝛽 and 𝛾 as input and check whether they correspond in forming a triangle and returns the string “YES” or “NO” without quotes accordingly */

#include <stdio.h>
int main ()
{
	int a, b, c;
	printf ("Enter three angles :");
	scanf ("%d %d %d", &a, &b, &c);
	if (a>0 && a<180 && b>0 && b<180 && c>0 && c<180 && a+b+c==180)
	printf ("YES");
	else
	printf ("NO");
	return 0;
}
