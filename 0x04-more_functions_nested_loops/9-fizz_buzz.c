#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
			continue;
		} else if (i % 3 == 0)
		{
			printf(" Fizz");
			continue;
		} else if (i % 5 == 0)
		{
			printf(" Buzz");
			continue;
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf(" %d", i);
		}
	}
	putchar('\n');
	return (0);
}
