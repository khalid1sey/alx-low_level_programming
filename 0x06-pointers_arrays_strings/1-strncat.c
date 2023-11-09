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
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcat - a custom function to concatnate two strings
 *
 * @src: source os string
 * @dest: destination
 *
 * Return: concatnated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);

	while (*dest)
		dest++;

	while (len != 0)
	{
		*dest = *src + n;
		dest++;
		src++;
	}

	return (dest);
}
