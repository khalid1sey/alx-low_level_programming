#include <stdio.h>
#include <ctype.h>
#include <time.h>

/**
 * main - a program that checks wether a number is positive or negative
 *
 * Return: 0
*/
int main(void)
{
	int number;


	for (number = 0; number < 10; number++)
	{
		while (number < 10)
		{
			putchar(number + '0');
			if (number != 9)
			{
				putchar(',');
				putchar(' ');
			}
			number++;
		}
	}

	putchar('\n');
	return (0);
}
