#include "main.h"

/**
 * _strcat - a custom function to concatnate two strings
 *
 * @src: source os string
 * @dest: destination
 *
 * Return: concatnated string
*/
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest)
		dest++;

	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (ptr);
}
