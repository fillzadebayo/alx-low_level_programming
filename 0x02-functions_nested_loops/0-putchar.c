#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char word[] = "_putchar";
	for (i=0; i<strlen(word); i++)
	{
		_putchar(word[i]);
	}
		_putchar("/n");
	return (0);
}
