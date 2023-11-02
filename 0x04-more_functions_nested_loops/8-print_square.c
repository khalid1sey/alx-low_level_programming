#include "main.h"

/**
 * print_square - a function that draws a diagonal line on the terminal.
 * @size: distance
 * Return: 0
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	} else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
