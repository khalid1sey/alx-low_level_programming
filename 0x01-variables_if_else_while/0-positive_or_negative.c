#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that checks wether a number is positive or negative
 *
 * Return: 0
*/
int main(void)
{
	int number;

	srand(time(0));
	number = rand() - RAND_MAX / 2;

	if (number > 0)
	{
		printf("%i is positive\n", number);
	} else if (number == 0)
	{
		printf("%i is zero\n", number);
	} else
	{
		printf("%i is negative\n", number);
	}
	return (0);
}
