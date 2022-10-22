/* Write a program that takes 3 lengths, 𝑎, 𝑏 and 𝑐 as input and check whether they correspond in forming a
right-angled triangle and returns the string “YES” or “NO” without quotes accordingly */

#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Enter three lengths:");
	scanf ("%d %d %d", &a, &b, &c);
	if (a>=0 && a<=100000 && b>=0 && b<=100000 && c>=0 && c<=100000)
	{
		if((a*a)+(b*b)==(c*c))
		printf("YES");
		else
		printf("NO");
	}
	else 
	printf("Out of range");
	return 0;
}