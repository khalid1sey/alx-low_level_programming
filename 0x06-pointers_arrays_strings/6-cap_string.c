#include "main.h"
#include <ctype.h>

/**
 * cap_string - a function that capitalize all words of a string
 *
 * @str: string
 *
 * Return: capitalized string
*/
char *cap_string(char *str)
{
	int i = 0;
	int cap = 1;

	while (str[i] != '\0')
	{
		if (isalpha(str[i]))
		{
			if (cap)
			{
				str[i] = toupper(str[i]);
			}
			cap = 0;
		} else
		{
			cap = 1;
		}

		i++;
	}
	return (0);
}
