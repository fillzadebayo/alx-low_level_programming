#include <stdio.h>

/**
* main - Prints 50 fibonnaci numbers
*
* Return: Always 0.
*/

int main(void)
{
	int i, n, n1, n2, next;
		n = 50;
		n1 = 0;
		n2 = 1;
	for (i = 0; i < n; ++i)
	{
		printf("%d, ", n2);
		next = n1 + n2;
			n1 = n2;
		n2 = next;
	}
return (0);
}
