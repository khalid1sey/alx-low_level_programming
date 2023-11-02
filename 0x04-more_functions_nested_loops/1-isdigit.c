#include "main.h"

/**
 * _isdigit - a function that checks lowercase character.
 *
 *@c: given character
 * Return: 1 (Success) | 0
*/
int _isdigit(int c)
{

	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);

	return (0);
}
