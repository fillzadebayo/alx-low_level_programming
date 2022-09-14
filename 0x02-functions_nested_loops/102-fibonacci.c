#include <stdio.h>

/**
* main - Prints 50 fibonnaci numbers
*
* Return: Always 0.
*/

int main(void)
{
	int i, n, n1, n2, nextTerm;
		n = 50;
		n1 = 0;
		n2 = 1;
	nextTerm = 1;
	for (i = 1; i <= n; ++i)
	{
		printf("%d, ", nextTerm);
		n1 = n2;
		n2 = nextTerm;
		nextTerm = n1 + n2;
	}
return (0);
}
