#include "main.h"

/**
 * _isupper - a function that checks lowercase character.
 *
 *@c: given character
 * Return: 1 (Success) | 0
*/
int _isupper(int c)
{

	if (c <= 96 && c >= 65)
		return (1);
	else
		return (0);

	return (0);
}
