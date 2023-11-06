#include "main.h"

/**
 * swap_int - a function that takes a pointer to an int as parameter
 *
 * @a: a pointer to the first integer
 * @b: a pointer to the second integer
 *
 * Return: 0
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
