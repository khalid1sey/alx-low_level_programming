#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times alphabet in lowercase.
 *
 * Return: 0  void
*/
void print_alphabet_x10(void)
{
	char j = 1, i;

	while (j <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		j++;
		putchar('\n');
	}
}
