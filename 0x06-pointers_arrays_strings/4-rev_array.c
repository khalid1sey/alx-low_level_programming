#include "main.h"

/**
 * reverse_array - a function to reverse content of array
 *
 * @a: array
 * @n: size of array;
 *
 * Return: 0 void
*/
void reverse_array(int *a, int n)
{
	int start = 0, end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
