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
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		printf("%c", i);
	}
	for (i = 'a'; i <= 'z'; i++)
	{
		printf("%c", toupper(i));
	}
	printf("\n");
	return (0);
}
