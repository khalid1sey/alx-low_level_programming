#include "main.h"

/**
 *print_rev -  a function that prints a string
 *
 *@s: the string to print to stdout
 *
 * Return: 0 void
*/
void print_rev(char *s)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
