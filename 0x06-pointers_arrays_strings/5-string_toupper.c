#include "main.h"

/**
 * string_toupper - a function that changes lowercase strings to uppercase
 *
 * @str: string
 *
 * Return: uppercase character
*/
char *string_toupper(char *str)
{

	int i = 0;

	for (i = 0; i < str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
