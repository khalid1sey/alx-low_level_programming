#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: 0
*/
void more_numbers(void)
{
	int i, j;
	j = 0;
	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			putchar(i + '0');
			if (i > 9)
			{
				putchar((i + 2) + '0');
			}
		}
		putchar('\n');
		j++;
	}
	putchar('\n');
}
