#include <stdio.h>

/**
 * main - a program that checks wether a i is positive or negative
 *
 * Return: 0
*/
int main(void)
{
	int i, j, k;


	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (k != 9 && j != 9 || i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
