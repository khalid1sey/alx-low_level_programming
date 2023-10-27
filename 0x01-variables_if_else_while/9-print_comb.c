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
		putchar(number + '0');
        putchar(',');
        putchar(' ');
	}

	putchar('\n');
	return (0);
}
