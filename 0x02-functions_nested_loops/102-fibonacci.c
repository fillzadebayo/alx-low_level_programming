#include <stdio.h>

/**
* main - Prints 50 fibonnaci numbers
*
* Return: Always 0.
*/

int main(void)
{
	int i, n;
		n = 50;
		int n1 = 0, n2 = 1;
	int nextTerm = n1 + n2;
		printf("%d, %d, ", n1, n2);
	for (i = 3; i <= n; ++i)
	{
		printf("%d, ", nextTerm);
		n1 = n2;
		n2 = nextTerm;
		nextTerm = n1 + n2;
	}
return (0);
}
