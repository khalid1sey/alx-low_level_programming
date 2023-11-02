#include "main.h"

/**
 * print_triangle - a function that draws a diagonal line on the terminal.
 * @n: distance
 * Return: 0
*/
void print_triangle(int n)
{
	int i, j, k;

	if (n <= 0)
		putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			putchar(' ');
		}

        for (k = j; k > i; k--)
		{
		    putchar('#' + 0);
		}
		putchar('\n');
	}
	putchar('\n');
}
