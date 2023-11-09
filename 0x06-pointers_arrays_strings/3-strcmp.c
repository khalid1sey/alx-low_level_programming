#include "main.h"

/**
 * _strcmp - a custom function to implement built in strcmp
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: result of comparision  which is integer
 *           0 if string1 and string2 are equal
 *          -1 > if string1 is less than string2
 *           1 < if string 1 is greater than string 2
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
