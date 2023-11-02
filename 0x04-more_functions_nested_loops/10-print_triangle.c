#include "main.h"

/**
 * print_triangle - a function that draws a diagonal line on the terminal.
 * @size: distance
 * Return: 0
*/
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = i; j < size; j++)
			{
				putchar(' ');
			}

        	for (j = 1; j <= i; j++)
			{
			    putchar('#' + 0);
			}
			putchar('\n');
		}
	}
}
