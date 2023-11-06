#include "main.h"

/**
 * _strlen - a function that takes a pointer to an int as parameter
 *
 * @s: a pointer to the second integer
 *
 * Return: size or length of given integer
*/
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
