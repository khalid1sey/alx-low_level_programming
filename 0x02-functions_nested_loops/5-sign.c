#include "main.h"

/**
 * print_sign - a function that checks lowercase character.
 *
 *@n: given number
 * Return: 1 (Success) | 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		putchar('0');
	}
	else if (n < 0)
	{
		return (-1);
		putchar('-');
	}

	return (0);
}
