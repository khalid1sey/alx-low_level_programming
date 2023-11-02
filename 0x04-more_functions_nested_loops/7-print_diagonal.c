#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: distance
 * Return: 0
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}
		putchar('\\' + 0);
		putchar('\n');
	}
	putchar('\n');
}
