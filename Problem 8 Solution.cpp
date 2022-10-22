/* C program that takes, ?? and ?? as input from the user, and gives the depth of descent as output */

#include <stdio.h>
int main ()
{
	int c, g, h;
	printf ("Enter the gravity, g :");
	scanf ("%d", &g);
	printf ("Enter the velocity, c :");
	scanf ("%d", &c);
	if (c>=1000 && c<=3000 && g>=1 && g<=10 && (c*c)%g==0)
	{
		h=(c*c)/(2*g);
		printf ("%d", h);
	}
	else
	printf ("Out of range");
	return 0;
}