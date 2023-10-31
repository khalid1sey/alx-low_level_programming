#include "main.h"

/**
 * _islower - a function that checks lowercase character.
 *
 *@c: given character
 * Return: 1 (Success) | 0
*/
int _islower(int c)
{

	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);

	return (0);
}
