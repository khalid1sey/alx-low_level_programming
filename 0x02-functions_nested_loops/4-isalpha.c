#include "main.h"
#include <stdlib.h>

/**
 * _isalpha - a function that checks lowercase character.
 *
 *@c: given character
 * Return: 1 (Success) | 0
*/
int _isalpha(int c)
{
	if (c <= 122 && c >= 65)
		return (1);
	else
		return (0);

	return (0);
}
