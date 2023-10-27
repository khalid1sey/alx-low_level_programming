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
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;

	if (n > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, ld);
	} else if (n == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, ld);
	} else if (n < 6 && n !=0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0", n, ld);
	}
	return (0);
}
