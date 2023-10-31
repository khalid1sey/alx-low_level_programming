#include "main.h"

/**
 * _abs -a function that computes the absolute value of an integer.
 *
 *@n: given number
 * Return: 0
*/
int _abs(int n)
{

	if (n < 0)
	{
		n *= -1;
		return (n);
	}

	return (n);

}
