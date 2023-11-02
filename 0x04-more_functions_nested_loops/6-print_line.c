#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: distance
 * Return: 0
*/
void print_line(int n)
{
	int i;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}

}
