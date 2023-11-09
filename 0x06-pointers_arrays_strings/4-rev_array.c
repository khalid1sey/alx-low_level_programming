
/**
 * reverse_array - reverses the content of an array of integers:
 *
 * @a: array
 *
 * @n: integer  variable
 *
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int temp;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
	temp = a[start];
	a[start] = a[end];
	a[end] = temp;
	start++;
	end--;
	}
}
