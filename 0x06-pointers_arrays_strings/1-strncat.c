#include "main.h"

/**
 * _strncat - a custom function to concatnate two strings
 *
 * @src: source os string
 * @dest: destination
 * @n: size
 *
 * Return: concatnated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = _strlen(dest);
	int i;
`
	while (i < n && src[i] != '\0')
	{
		dest[len + 1] = src[i];
		i++;
	}

	dest[len + 1] = '\0';
	return (dest);
}
