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
	int number = 0;

	while (number < 10)
	{
		printf("%i", number);
		number++;
	}
	printf("\n");
	return (0);
}
