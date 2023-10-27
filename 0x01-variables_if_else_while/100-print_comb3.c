#include <stdio.h>
#include <ctype.h>
#include <time.h>

/**
 * main - a program that checks wether a i is positive or negative
 *
 * Return: 0
*/
int main(void)
{
	int i, j;


	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
                putchar(i + '0');
                putchar(j + '0');
                if (j != 9 || i != 8)
			    {
				    putchar(',');
				    putchar(' ');
			    }
		}
	}
	putchar('\n');
	return (0);
}
